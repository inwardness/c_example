#include<stdio.h>
#define MAXLINE 1000
#define N 8

char line[MAXLINE];

void clrlin(char line[],int lim);
int get1line(char line[],int lim);
void fold_line(char line[], int lim);

int main(){
    extern int get1line(char line[], int lim);
    extern void clrlin(char line[], int lim);
    extern void fold_line(char line[], int lim);
    int i =0;
    int len =0;
    printf("Enter a string for a fold line:\n");
        while ((len = (get1line(line,MAXLINE)) )> 0)
        {
            fold_line(line,MAXLINE);
        }
    return 0;
}

void clrlin(char line[],int lim){
    int i;
    for ( i = 0; i < lim; i++)
    {
        line[i] = 0;
    }
    line[lim] = '\0';
}

int get1line(char line[], int lim){
    int i;
    char c;
    for ( i = 0; i < lim -1 && (c=getchar())!=EOF && c!='\n'; i++)
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            ++i;   
        }
        line[i] = '\0';
    
    return i;     
}

void fold_line(char line[], int lim){
    int i;
    int last_position =0;
    int back_position =0;
    
    for ( i = 0; i < lim; ++i){
        if (i%N==0){
            if (line[i]==' ' && line[i] == '\t'){
               putchar('+');
               }
            else{
                putchar('-');
            }
        } 
    }
    printf("%s",line);
}