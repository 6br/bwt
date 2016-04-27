#include <fstream>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <stdio.h>
#include "input.h"
#include <stdlib.h>

#define N 101

using namespace std;

void fileiocpp(const char* filename, long int* data)
{
    std::ifstream ifs(filename, std::ios::in);
    std::string str;
    if (ifs.fail())
    {
        std::cerr << "Error" << std::endl;
        return;
    }
    long int i = 0;
    while (getline(ifs, str))
    {
      data[0] = 1;
    } 
    return;
}

void input_fgets(const char* filename, long int* data)
{
    FILE *fp;
    char buf[N] = {'\0'};
    long int j = 0;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Fail to open %s\n", filename);
        return;
    }

    while (fgets(buf, N, fp) != NULL) {
        for (int i = 0; i < N; i++, j++){
            if (buf[i] == '\0' ){
                data[j] = 0;
                break;
            } else {
                data[j] = (((buf[i] >> 2) ^ (buf[i] >> 1)) & 3) + 1;
            }
            if (j % (1024 * 1024 * 100) == 0){
                std::cerr << j / (1024*1024) << "MB read." << std::endl;
            }
        }
    }

    fclose(fp);

    std::cerr << "File has read." << std::endl;
    return;
}

void input_fgets_char(const char* filename, signed char* data)
{
    FILE *fp;
    char buf[N] = {'\0'};
    long int j = 0;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Fail to open %s\n", filename);
        return;
    }

    while (fgets(buf, N, fp) != NULL) {
        for (int i = 0; i < N; i++, j++){
            if (buf[i] == '\0' ){
                data[j] = 0;
                break;
            } else {
                data[j] = (((buf[i] >> 2) ^ (buf[i] >> 1)) & 3) + 1;
            }
            if (j % (1024 * 1024 * 100) == 0){
                std::cerr << j / (1024*1024) << "MB read." << std::endl;
            }
        }
    }

    fclose(fp);

    std::cerr << "File has read." << std::endl;
    return;
}

long int* input_fgets_malloc(const char* filename, long int datasize)
{
    FILE *fp;
    char buf[N] = {'\0'};
    long int* data = (long int*)malloc(sizeof(long int) * datasize); 
    long int j = 0;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Fail to open %s\n", filename);
        return data;
    }

    while (fgets(buf, N, fp) != NULL) {
        for (int i = 0; i < N; i++, j++){
            if (buf[i] == '\0' ){
                data[j] = 0;
                break;
            } else {
                data[j] = (((buf[i] >> 2) ^ (buf[i] >> 1)) & 3) + 1;
            }
            if (j % (1024 * 1024) == 0){
                std::cerr << j / (1024*1024) << "MB read." << std::endl;
            }
        }
    }

    fclose(fp);

    std::cerr << "File has read." << std::endl;
    return data;
}
