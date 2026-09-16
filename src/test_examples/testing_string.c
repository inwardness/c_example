 #include<stdio.h>
#include<stdlib.h>
#define MAX 40
int fgetline(char line[],int lim);
void delspace(char line[],int length);
int count(char line[],int length);
int main()
{
    int i,cnt;
    char line[MAX];
    int length = 0;

    while ((length = fgetline(line,MAX)) > 0)
    {
        printf("%s\n",line); 
        printf("%d\n",length);
        
        
    }
    
}

int fgetline(char line[],int lim)
{
    int  i,c;
    
    for ( i = 0; i < lim -1 && (c=getchar())!='\n' && c!='\n' ; i++)
    {
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            i++;
        }
           line[i] = '\0';
        
        
    }
       
 return i;   
}
 
int count(char line[],int length) 
{
    int i;
    int count = 0;
    for (size_t i = line[0]; i < (line[i] == '\n'); i++)
    ++count;
    
    return count;
}
void delspace(char line[],int length)
{
    int i;

    for ( i = line[length]; i > line[i]!=' '; i--)
    {
        if (line[i]!= ' ')
        line[i] = '\n';
        line[i+1] = '\0';
    }
    
}