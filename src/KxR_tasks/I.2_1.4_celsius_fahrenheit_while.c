#include<stdio.h>
/*print tables of temerature for Fahrenheit and Celsius from fahr=0,20,..,300*/

int main(){
	int fahr,cels;										//initialized type varialbe to output
	int lower,upper,step;								//initialized type variable to limits

	lower=0;											//lowest limits of fahrenheit
	upper=300;											//highest limits of fahrenheit
	step=20;											//step between to position
	
	fahr=lower;											//assign first value of fahrenheit low limit
	while(fahr<upper){									//cycle repeat while variable of fahr lowest value upper	
		cels=5*(fahr-32)/9;								//formula celsius temperature
		printf("celsius:%d\tfahrenheit:%d\n",cels,fahr);//variables cels and fahr recount every time while cycle began again and printing in output
		fahr=fahr+20;									//addition step to variable fahr
	}
      }
