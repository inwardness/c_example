#define MAX 50

#include<stdio.h>
int main()
{
    char line[MAX];
    char c;
    int i = 0;
    int fdot = 0;
    int ldot = 0;
    printf("enter a opcode of program:\n");
    while (c!=EOF)
    {
        for ( i = 0; i < MAX - 1 && ((c=getchar())!= EOF); i++)
        {
            line[i] = c;
                          
        }
                      
    }
    for ( i = 0; i < MAX -1; i++)
    {
        if (c = '\n')
            {
                if (fdot == 0 && ldot == 0)
                {
                    fdot = i;
                
                    for ( i = 0; i < fdot; i++)
                    {
                        printf("%c",line[i]);
                        
                    }
                }
                else if (fdot != 0 && ldot == 0)
                {
                    ldot = fdot;
                    fdot = i;
                    for ( i = ldot; i < fdot; i++)
                    {
                        printf("%c",line[i]);
                        
                    }
                    
                }
                else if (fdot!= 0 && ldot!=0)
                {
                    ldot = fdot;
                    fdot = i;
                    for ( i = ldot; i < fdot; i++)
                    {
                        printf("%c",line[i]);
                        
                    }
                }
            }
    }
    
 
     

    }
