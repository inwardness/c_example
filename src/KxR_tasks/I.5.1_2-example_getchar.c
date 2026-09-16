//input to output symbols

#include <stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != EOF)
	{
		putchar(c);
			
	}
	printf("Символ: %c | Десятичный: %d | Hex: %x\n", c, c, c);
	return c;
}
