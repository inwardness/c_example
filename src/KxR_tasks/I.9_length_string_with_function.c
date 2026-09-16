#include <stdio.h>
#define MAXLINE 1000

int copy(char to[], char from[]);
int f1getline(char line[], int);

int main()
{
	int len;
	int max = 0;

	char line[MAXLINE];
	char longest[MAXLINE];

	while ((len = f1getline(line, MAXLINE)) > 0) // symbols count from input string to variable while string doesn't equal zero
	{
		if (len > max)
		{
			max = len;			 // assigne length value of string to max if it's bigger then reference
			copy(longest, line); // copy input string in massive if sum of symbols bigger then refered - max
		}
		if (max > 0)
			printf("%s", longest);
	}
	return 0;
}
int f1getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

int copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
