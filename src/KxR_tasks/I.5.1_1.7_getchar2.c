// ver.2
#include<stdio.h>
int main()
{
    int c;
    
   // while ((c = getchar())!=EOF)
   //putchar(c);
    printf("Enter Ctrl+Z to print EOF-value or Ctrl+C to exit\n");
    printf("or enter a value:");
    while (c = getchar())
    {
     if(c != EOF){
    printf("%d",c);
    printf("\n");
    
    }
    else{
    printf("%d",c = EOF);
    putchar('\n');
    }
    }
    
}