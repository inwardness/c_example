#include<stdio.h>
int main()
{
	int x = 5;
	printf("value x=%d\n",x);
	printf("address x=%x\n",&x);
	
	int *p = &x;
	printf("value p=%d\n",*p);
	printf("address p=%x\n",*p);
	*p =6;
	int **q = &p;
	int ***r = &q;
	printf("value x=%x\n",x);
	printf("address p=%x\n",*p);
	printf("address q=%x\n",**q);
	printf("address r=%x\n",***r);
	printf("address x=%x\n",&x);
	
}
