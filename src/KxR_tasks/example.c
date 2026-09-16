//types in C
#include <stdio.h>
#include <limits.h>

    int main(int argc, char** argv) 
{
    printf("minchar: %llx maxchar: %llx unsignedchar:%llx\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    printf("minshort: %llx maxshort: %llx unsignshot:%llx\n", SHRT_MAX, SHRT_MIN,UINT_MAX);
    printf("minint: %llx maxint: %llx unsignedint:%llx\n", INT_MIN, INT_MAX,UINT_MAX);
    printf("minlong: %llx maxlong: %llx unsignedlong:%llx\n", LONG_MIN, LONG_MAX,ULONG_MAX);
    printf("minlong long: %llx maxlong long: %llx unsignedlong long:%llx\n\n",LLONG_MIN, LLONG_MAX,ULLONG_MAX);

    printf("minchar: %llx-bytes maxchar: %llx-bytes unsignedchar:%llx-bytes\n", sizeof(CHAR_MIN), sizeof(CHAR_MAX), sizeof(UCHAR_MAX));
    printf("minshort: %llx-bytes maxshort: %llx-bytes unsignshot:%llx-bytes\n", sizeof(SHRT_MAX), sizeof(SHRT_MIN),sizeof(UINT_MAX));
    printf("minint: %llx-bytes maxint: %llx-bytes unsignedint:%llx-bytes\n", sizeof(INT_MIN), sizeof(INT_MAX),sizeof(UINT_MAX));
    printf("minlong: %llx-bytes maxlong: %llx-bytes unsignedlong:%llx-bytes\n", sizeof(LONG_MIN), sizeof(LONG_MAX),sizeof(ULONG_MAX));
    printf("minlong long: %llx-bytes maxlong long: %llx-bytes unsignedlong long:%llx-bytes\n",sizeof(LLONG_MIN), sizeof(LLONG_MAX),sizeof(ULLONG_MAX));
    return 0;
    
}	

