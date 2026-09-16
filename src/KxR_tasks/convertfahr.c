#include <stdio.h>

	int  main(){

		float c,ce;
		float f;
		printf("Vvedite temperaturu po celsiyou:\n");
		scanf("%f",&ce);
		c = ce;
		f=(c*(9.0/5.0)+32);
		printf("temperatura po farenheitu:\n %3.1f\n",f);
	}
