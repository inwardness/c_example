#include<stdio.h>
#define MAX 50
int main(){

    char line[MAX];
    int i;
    char c = 0;

    for ( i = 0; i < MAX; i++)
    {
        line[i] = '\0';
    }
    printf("enter a sring:\n");
    
    
    
        for ( i = 0; i < MAX && (c=getchar())!=EOF; i++)
        {
            line[i] = c;
        }
        
    
    
    for ( i = 0; i < MAX; i++)
    {
        printf("%c",line[i]);
    }
    


}