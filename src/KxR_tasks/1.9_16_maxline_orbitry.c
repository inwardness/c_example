#include <stdio.h>
#define IMAXLINE 100
int f1getline(char length[], int max); // function to get a sum of characters in array
void copy(char to[], char from[]);
int space(char ArrayForSpaces[], int max); // function copy element by element from on array to other
int main()
{
		
	int len; // length of inputs line to compare
	int max = 0;
	int SpsI1w = 0;
	int SpsI2w = 0;
	char ArrayForSpaces[SYMINLINE];
	char length[SYMINLINE]; // array to inputs character length of 100
	char maxlength[SYMINLINE];
	max = f1getline(length, SYMINLINE);
	SpsI1w = space(ArrayForSpaces, max);
	copy(maxlength, length);
	while ((len = f1getline(length, SYMINLINE)) > 0)
	{
		if (len == max)
		{
			SpsI2w = space(ArrayForSpaces, max);
			if (SpsI2w > SpsI1w)
				copy(maxlength, length);
		}
		else if (len > max)
		{
			max = len;
			copy(maxlength, length);
		}
	}
	printf("\n%s\n", maxlength);
	printf("symbols in first max string length:%d\n", SpsI1w);
	printf("symbols in equal string length:%d\n", SpsI2w);
	printf("symbols in row:%d\n", max);

	return 0;
}

int space(char length[], int max)
{
	int m = 0;
	int i;
	for (i = 0; i < max - 1; ++i)
		if (length[i] != ' ')
			++m;
	return m;
}
int f1getline(char length[], int maxline)
{
	int c, i;
	int max;
	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		length[i] = c;
	if (c == '\n')
	{
		length[i] = c;
		++i;
	}
	length[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	char i;
	while ((to[i] = from[i]) != '\0')
		i++;
}
