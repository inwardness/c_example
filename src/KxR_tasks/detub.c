#define TAB 8
#define MAXLINE 1000
#include <stdio.h>

void detab(char line[],int lim);
int gettline(char line[], int lim);
char line[MAXLINE];

int gettline(char line[],int lim){
    char c;
    int i;

   for ( i = 0; i < lim & ((c = getchar())!= EOF) & c!='\n'; i++)
        line[i] = c;
	        if (line[i] == '\n'){
            line[i] = c;
            ++i;
            }
        line[i] = '\0';
	
return i;
}

void detab(char line[],int lim){
    int i,j;
    int CharPos = 0;
    int TabPos = 0;
    int tabs = TAB;
    for ( i = 0; i < lim; i++){
        if (line[i] == '\t'){
            TabPos = tabs - (CharPos % tabs);
            while (TabPos > 0)
            {
                putchar('_');
                TabPos--;
                CharPos++;
            }
            
               /*  for ( j = 0; j < TabPos; j++){
                    putchar('_');
                    CharPos++;
                    } */
                          
        }
        else if(line[i] != '\t'){
            ++CharPos;
            putchar(line[i]);
        }
    }    
}
     

int main(){
    int length = 0;
    extern int gettline(char line[],int lim);
    extern void detab(char line[],int lim);
    printf("Enter a string:\n");
    while ((length = gettline(line ,MAXLINE)) > 0){
        detab(line,MAXLINE);
        printf("\n");
        /*printf("%s",line);*/
    }
    
    return 0;
}
