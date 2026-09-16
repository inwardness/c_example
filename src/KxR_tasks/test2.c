#include<stdio.h>
	int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	int sum = 0;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	
	sum = a*b + c/d;
	printf("%d\n",sum);
}

