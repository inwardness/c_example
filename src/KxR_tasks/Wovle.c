#include <stdio.h>
 
int main()
{
	char n;
	int uW,dW;
	printf("print up or down symbol on cyrilic:\n");
	scanf("%c" ,&n );
	
	uW = (n=='Я');
	dW = (n=='я');
if (uW||dW)
{
	printf("гласные");}
else
{
	printf("согласные");}
	return 0;
}
 
