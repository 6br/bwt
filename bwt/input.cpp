#include <fstream>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include "input.h"

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
    std::vector<long int> a;// = new vector<long int>(0);
    while (getline(ifs, str))
    {
      data[0] = 1;
    } 
    return;
}
