#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	char n[8];
	char uW,dW;
	printf("print up or down symbol on cyrilic:\n");

if (scanf("%7s",n)!=0) return 0;
int uW=(strcmp(n,"Я") == 0);
int dW=(strcmp(n,"я") == 0);

	if (uW||dW)
{
	printf("гласные");}
else
{
	printf("согласные");}
	return 0;
}

