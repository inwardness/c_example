/* Revise  the  main  routine  of  the  longest-line  program  so  it  will  correctly  print
the length of arbitrary long input lines, and as much as possible of the text. */

#include <stdio.h>
#define SYMINSTRING 100
int f1getline(char lenInString[], int max); 								// function for counting length string
void copy(char to[], char from[]);		   									// copy function from getin massive to writeout massive
int fchars(char lenInString[], int max);	   								// function count spaces in equal string
void fclear(char lenInString[],int max);									// clear stringgit addc.
int main()
{
	int len = 0;   															// symbols in gets string
	int max = 0;
	int max1 = 0;
	int chrsinfirstsreing = 0;   															// value of chars in first basic string as a arbitrary
	int chrs1 = 0; 															// spaces in previuos string with max chars
	int chrs2 = 0;

	char lenInStrings[SYMINSTRING];   										// string for counting and retrieving chars
	char SecondMaxString[SYMINSTRING]; 										// string for counting spaces
	char FirstMaxString[SYMINSTRING]; 										// string with maximum chars

	printf("print arbitry string:\n");

	max = f1getline(lenInStrings, SYMINSTRING); 
	max1 = max;																// assigned maxline first inputs string
	chrs1 = fchars(lenInStrings, max);
	chrsinfirstsreing = chrs1;										// counting chars in first string
	copy(FirstMaxString, lenInStrings);
	copy(SecondMaxString, lenInStrings);										// copy string to FirstMaxString output
	printf("string length - %d; chars in arbitry string - %d;\n\n",max1,chrsinfirstsreing);
	fclear(lenInStrings,max);
	while ((len = f1getline(lenInStrings, SYMINSTRING)) > 0) 				// while chars in string does not equal 0
	{
		if (len > max)
		{
			chrs2 = fchars(lenInStrings, len);

			if (chrs2 > chrs1)
			{
				max = len;
				chrs1 = chrs2;
				copy(FirstMaxString, lenInStrings);
			}
		}
		else if (len == max) 												// if value of chars condition equal max
		{
			chrs2 = fchars(lenInStrings, len); 								// get value chars in string equal max

			if (chrs2 > chrs1){ 											// if chars in second string more less then first string
				chrs1 = chrs2;
				copy(FirstMaxString, lenInStrings); 
				}															// copy getting string in FirstMaxString
		}
	}
	printf("\ncerrent arbitry string:	%scurrent arbitry string length:%d----first string arbitry length:%d\n", FirstMaxString,max,max1);

	printf("sum of chars in current arbitry string:%d----sum of chars in first arbitry string:%d;\n\n",chrs1,chrsinfirstsreing);

	return 0;
}

int fchars(char lenInString[], int max)
{
	int m = 0;
	int i;
	for (i = 0; i < max - 1; ++i)
		if (lenInString[i] != ' ')
			++m;
	return m;
}

void fclear(char lenInStrings[],int max)
{
	for (int i = 0; i < max ; i++)
	{
		lenInStrings[i] = '\0';
	}
	
}
int f1getline(char lenInStrings[], int max)
{
	char c;
	int i;

	for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		lenInStrings[i] = c;
	if (c == '\n')
	{
		lenInStrings[i] = c;
		++i;
	}
	lenInStrings[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
