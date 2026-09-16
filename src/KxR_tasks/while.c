#include<stdio.h>
	int main()
{	int  c;
	int  space=0;
	int  tab=0;
	int  nstring=0;
	 while((c=getchar())!=EOF)
	 {
	 	if(c==' ')
	 		 ++space;
		if(c=='\t')
			  ++tab;
		if(c=='\n')
			  ++nstring;
	 }
	printf("%d\n",space);
	printf("%d\n",tab);	
	printf("%d\n",nstring);	
}

