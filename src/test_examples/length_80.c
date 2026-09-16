#include <stdio.h>
#define MAX 100
int fgetline(char length[], int max);
void copy(char from[], char to[]);
int main()
{
    char length[MAX];
    char max[3][MAX];
  //  char max2[MAX];
  //  char max3[MAX];
    int len=0;
    int j;
    
    while ((len = fgetline(length, MAX)) > 0)
    {
        if (len>5){
            copy(max[j],length);
            ++j;
        }
    }
    
        printf("%s",max);
    return 0;
}

int fgetline(char length[], int max)
{
    int i;
    char c;
    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        if (c == '\n')
        {
            ++i;
            length[i] = c;
        }
    length[i] = '\0';
    return i;
}
void copy(char from[], char to[])
{
    char i;
    while ((from[i] = to[i]) != EOF)
        ++i;
}
    