#include<stdio.h>
/*power:involve base in n-power: n>=0; ver.2*/


int power(int m,int n);

/*тест функции power*/

int main()
{
    int a;
    int b;
    printf("enter nambers a and b:\n");
	scanf("%d",&a);
    scanf("%d",&b);
    
    printf("result of function power\n  (a^b)::%d^%d = %d \n",a,b,power(a,b));
	return 0;
}

int power(int base, int n)
{
    int p;
    for ( p = 1; n > 0; --n)
    
    p = p * base;
    return p;
    
    
}