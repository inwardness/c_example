// fahrenheit to celsius covert

#include <stdio.h>

int main()
{
	/*initializing values abd their types*/ 
	int lower = 0;		//minimal value	 							
	int upper = 300;	//maximum value 							
	int step = 20;		//increment step
	/*for float point type variables*/ 								
	float cels, fahr;
	fahr = lower;

	/*assignment value to fahr*/
	printf("base_temperature\n celsius:\tfahrenheit:\n");

	/*cycle where the referance value - upper limit in fahrenheit is the value 
	what we calculate through the celsius convertation formula up down the low limit*/
	while (fahr <= upper)						
	{											
		cels = (5.0 * (fahr - 32.0) / 9);		
		printf("%3.1f\t\t-- %.1f\n", cels, fahr); 
		fahr = fahr + step;						
	}
}
