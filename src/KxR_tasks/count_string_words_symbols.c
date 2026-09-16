#include<stdio.h>
#define IN 1 /*inside word*/
#define OUT 0 /*outside word*/

/*counting symbols,words and strings*/
int main()
{
	int c,nl,nw,nc,state;
	state=OUT;
	nl=nw=nc=0;
	while ((c=getchar())!=EOF){
		++nc;
		if (c== '\n') ++nl;
		if (c== ' ' || c== '\n' || c== '\t')
		       	state=OUT;
		else if (state==OUT){
				state=IN;
				++nw;
		}
	
	}	
printf ("nc:%d nl:%d nw:%d\n",nc,nl,nw);

}

