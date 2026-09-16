#include<stdio.h>
#define MAXLINE 100

char line[MAXLINE];
char cutline[MAXLINE];
int get1line(char line[],int max);

int main(){
    int len=0;
    int max=20;
    while ((len = get1line(line,MAXLINE))>0){
        if (len > 0){
            if (len < max){
                printf("%s",line);
            }
            else
            printf("%d\n",len);
            
        }
        
    }
    
    return 0;
}

<<<<<<< HEAD
int get1line(char line[],int max){

    int i = 0;
    char c;
    for ( i = 0; i < MAXLINE -1 && (c = getchar())!= EOF && c!='\n' ; i++)
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            i++;
            line[i] = '\0';
        }
return i;        
=======
int get1line(char line[],int max)
{
    int i = 0;
    char c;

    for ( i = 0; i < MAXLINE-1 && (c = getchar())!=EOF && c!='\n'; i++)
    
        line[i] = c;
        if (c == '\n'){
        
            line[i] = c;
            i++;
        }
            line[i] = '\0';
        
    
    return i;
>>>>>>> 2d5601f9d3a236b7998a42f3647a3d4506825325
}