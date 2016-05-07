#include <iostream>
#include <string>
#include <vector>
#include <stdint.h>

using namespace std;

void fileiocpp(const char* filename, long int* data);
void input_fgets(const char* filename, long int* data);
void input_fgets_char(const char* filename, int8_t* data);
void input_fgets_fixed_char(const char* filename, int8_t* data, int64_t length);
void input_fgets_fixed_long(const char* filename, int64_t* data, int64_t length);
long int* input_fgets_malloc(const char* filename, long int datasize);
