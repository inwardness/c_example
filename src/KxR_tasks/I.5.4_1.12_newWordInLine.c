#include<stdio.h>
#define IN 1 /*in word*/
#define OUT 0 /*out word*/ 
int main(void){
	int c,wd;
	int smb=0;
	wd=0;
	while ((c=getchar())!=EOF){
		if (c!=' '&& c!='\t'){
				wd=IN;
				putchar(c);
				}else{
		      		 wd=OUT;
		      		   	putchar('\n');
		      	   
			
		      }
				
		}
	

	}


