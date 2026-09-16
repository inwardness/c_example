#include <stdio.h>
float fahrenheit(int celsius);

/*расчёт темпераутры по Фаренгейту отдельной функцией*/

int main()
{
	printf("Enter Ctrl + C for exit\n");
	int celsius;
	while (celsius !=EOF)
	{
	printf("enter celsius value to interpeted in fahrenheit:");
	scanf("%d",&celsius);
		
	printf("fahrenheit value=%.2f\n",fahrenheit(celsius));
	}
	return 0;
}

/*воводит base в n-ю степень; n>=0*/

float fahrenheit(int celsius)
{
	float fahrenheit;
	fahrenheit = (celsius * (9.0/5.0))+32;
	return fahrenheit;
}
