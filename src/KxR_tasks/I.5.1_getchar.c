// copy input to output 1-example
#include <stdio.h>

int main()
{					 /*copy input to output with EOF_flag print*/
	int c;			 /*type of value*/
	c = getchar();	 /*c assigned function to get symbols in input stream*/
	while (c != EOF) /*cycle work while c is not shourtkey Ctrl+D -End Of File*/
	{				 /*function intake and out take stream of symbols after press enter(new line)key*/
		putchar(c);
		c = getchar();
	}
}
