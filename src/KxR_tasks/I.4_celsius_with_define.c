//Namely constants
#include <stdio.h>
#define UPPER 300 // in here value UPPER become a constant cuase its becomes a constants number 300
#define LOWER 0	  // LOWER constant 0
#define STEP 20	  // STEP constant 20
int main()
{
	int fahr; // initialized value fahr
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{															// cycle from LOWER to UPPER for sets condition and step.We used a named constant instead values.
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32)); // print values using a named constants
	}
}
