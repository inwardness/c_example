#include "stdio.h"
const int MAXLINE = 1000;							//maximum string length

int f1getline(char line[], int MAXLINE);			//function for count symbols
int copy(char to[], char from[]);					//copy current massive in line to "logest"

int main()
{

	int len;										//current string length
	int max = 0;									//maximum string length from inputs strings
	char line[MAXLINE];								//current string
	char longest[MAXLINE];							//longest string

	while ((len = f1getline(line, MAXLINE)) > 0)		//cycle compire input with end-of-file = \0
	{
		if (len > max)								//if counter len bigger then installed max
		{
			max = len;								//assign value max if previous smaller then current
			copy(longest, line);					//function copy current line into longest
		}

		if (max > 0)								//print string if it's bigger the 0
		{
			printf("%s", longest);
		}
	}
	return 0;
}

int f1getline(char s[], int lim)										//counting symbols in line till the input symbol equals EOF
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)//assign element massive inputs symbol if its 
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

	int i = 0;

	while ((to[i] = from[i]) != '\0') //assign value in massive to[] value from massive for[], while symbole doesn't equal \0 one by one (++i)
		++i;
}
