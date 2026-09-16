#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main (int argc, char** argv) {
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	printf("CHAR_MAX: %d ", CHAR_MAX);
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("INT_MAX:  %d ", INT_MAX);
	printf("INT_MIN:  %d\n", INT_MIN);
	printf("LONG_MAX  %ld n", (long) LONG_MAX);	
	printf("LONG_MIX  %ld\n", (long) LONG_MIN);
	printf("SCHAR_MAX %d ",  SCHAR_MAX);
	printf("SCHAR_MIN %d ",  SCHAR_MIN);
	printf("SHRT_MAX %d\n",  SHRT_MAX);
	printf("UCHAR_MAX %u ",  UCHAR_MAX);
	printf("UINT_MAX %u\n",  UINT_MAX);
	printf("USHORT_MAX %d\n",  USHRT_MAX);

     return 0;
}


