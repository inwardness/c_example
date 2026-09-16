//input:
//MOVI 112
//OUT D
//IN B
//ADD B,D

//output:
//0x70 0xC7 0xC1 0x87
#define MAX 100
#include<stdio.h>
int main()
{
    char line[MAX];
    int i;
    char c;
    int startV = 0;
    int stopV = 0;
        for ( i = 0; i < MAX -1; i++){
        line[i] = 0;
    }
    printf("entered a programs:\n");
    
    for ( i = 0; i < MAX - 1 && (c = getchar())!='\0'; i++){ 

        line[i] = c;
            }
             
    
      for ( i = 0; i < MAX - 1; i++)
      {
        printf("%c",line[i]);
      }
   
      return 0;
}