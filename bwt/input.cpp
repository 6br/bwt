#include <fstream>
#include <iostream>
#include <string>
#include <iterator>
#include <cassert>

#include <stdio.h>
#include "input.h"
#include <stdlib.h>
#include <stdint.h>

#define N 102

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

void input_fgets_char(const char* filename, int8_t* data)
{
    FILE *fp;
    char buf[N] = {'\0'};
    uint64_t j = 0;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Fail to open %s\n", filename);
        return;
    }

    while (fgets(buf, N, fp) != NULL) {
        for (uint_fast16_t i = 0; i < N; i++, j++){
            if (buf[i] == '\0' || buf[i] == '$' ){
                data[j] = 0;
                break;
            } else {
                data[j] = (((buf[i] >> 2) ^ (buf[i] >> 1)) & 3) + 1;
            }
            if (j % (1024 * 1024 * 200) == 0){
                std::cerr << j / (1024 * 1024) << "MB read." << std::endl;
            }
        }
    }

    fclose(fp);

    std::cerr << "File has read." << std::endl;
    return;
}

void input_fgets_fixed_char(const char* filename, int8_t* data, int64_t length)
{
    FILE *fp;
    char buf[N] = {'\0'};
    uint64_t j = 0;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Fail to open %s\n", filename);
        return;
    }

    for (int64_t k = 0; k < length; k++) {
        if(fgets(buf, N, fp) != NULL) {
            for (uint_fast16_t i = 0; i < N; i++, j++){
                if (buf[i] == '\n' || buf[i] == '\0' || buf[i] == '$' ){
                    data[j] = 0;
                    j++;
                    break;
                } else {
                    data[j] = (((buf[i] >> 2) ^ (buf[i] >> 1)) & 3) + 1;
                }
                if (j % (1024 * 1024 * 100) == 0){
                    std::cerr << j / (1024*1024) << "MB read." << std::endl;
                }
            }
        }
    }

    fclose(fp);

    std::cerr << "File has read." << std::endl;
    return;
}

//5^27 = 2^64i 
void input_fgets_fixed_long(const char* filename, int64_t* data, int64_t length)
{
    FILE *fp;
    char buf[N] = {'\0'};
    int64_t j = 0;
    int8_t mer = (length <= 100)? 4 : 9; //TODO nEED FIX

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Fail to open %s\n", filename);
        return;
    }

    for (int64_t k = 0; k < length; k++) {
        if(fgets(buf, N, fp) != NULL) {
            for (uint_fast16_t i = 0; i < N; i++, j++){
                int8_t number;
                data[j] = 0;
                if (buf[i] == '\n' || buf[i] == '\0' || buf[i] == '$' ){
                    number = 0;
                    for (int64_t l = j; (l > j - mer && l >= 0) ; l--){
                      //std::cerr << l << std::endl;
                      data[l] *= 5;
                      data[l] += number;
                    }
                    j++;
                    break;
                } else {
                    number = (((buf[i] >> 2) ^ (buf[i] >> 1)) & 3) + 1;
                    assert(number <= 4);
                }
                for (int64_t l = j; (l > j - mer && l >= 0) ; l--){
                  //std::cerr << l << std::endl;
                  data[l] *= 5;
                  data[l] += number;
                }
                if (j % (1024 * 1024 * 100) == 0){
                    std::cerr << j / (1024*1024) << "MB read." << std::endl;
                }
            }
        }
    }
    int64_t k = (j - mer > 0)? j - mer : 0;
    for (; k <= j; k++){
        for (int64_t l = j; (l > k && l >= 0); l--){
            data[l] *= 5;
        }
    }

    fclose(fp);
    /*
    for(int i=0; i<length*101;i++){
        std::cerr << data[i] << std::endl;
    }*/

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

