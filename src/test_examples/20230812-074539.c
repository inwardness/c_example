#include <stdio.h>
#define IN 1
#define OUT 0
  int main(){
    int st,ns,ss, s,wd,nw,c,i;
    int wwc[10];
    for (i=0;i<9;++i)
    wwc[i]=0;
    st=ns=ss=s=wd=nw=0;
    while ((c=getchar())!='0' ){
    	nw=IN;
        ++s;
    	if (c==' '||c=='\t'||c=='\n'){
        nw=OUT;
        --s;
        ++wwc[s-0];
        	if
        
        }
       
      else if(nw==OUT){
       ++ss;
       
       
       }
        
       
       numbers[i+s];
        
       
   
       }
      for (i=0;i<9;++i) printf("%d\n", wwc[i]);
        printf("New word=%d\n",wd);
        printf("symbols=%d\n", s);
        printf("spaces and tabs=%d\n", ss);
       
  }
   
    
    
    