#include <iostream>
#include <string>
#include <vector>
#include <stdint.h>

using namespace std;

void fileiocpp(const char* filename, long int* data);
void input_fgets(const char* filename, long int* data);
void input_fgets_char(const char* filename, int8_t* data);
long int* input_fgets_malloc(const char* filename, long int datasize);
