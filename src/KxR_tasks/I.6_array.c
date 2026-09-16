#include <stdio.h>
#include <stdlib.h>
//counter of symbol,symbol-devider and otheres symbols
	int main(){
		int c,i,nwhite,nother;
		int ndigit[10];
		nwhite=nother=0;
		for (i=0;i<10;++i)
			ndigit[i]=0;
		while((c=getchar())!=EOF)
			if  (c>='0'&& c<='9')
				++ndigit[c-'0'];
			else if (c==' '|| c=='\t' || c=='\n' )
				++nwhite;
			else
				++nother;
		printf("\t");
		for(i=0;i<10;++i)
		{
		printf("%d",i);
		}
		printf("\n");
		printf("numbers=");
		for(i=0;i<10;++i)
			printf("%d",ndigit[i]);
		printf(" white space =%d,others=%d\n",nwhite,nother);
	}
	

