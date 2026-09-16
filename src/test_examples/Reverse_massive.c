#include<stdio.h>
 int main(){
  int max=10;
  int a[max];
  int exch;
  int i;
  printf ("print array:\n");
  for (i=0;i<max;++i){
      printf ("a[%d]=", i);
      scanf ("%d", &a[i]);
  }
  for (i=0;i<max/2;++i){
      exch=a[i];
      printf ("%d\n", exch);
      a[i]=a[max-1-i];
      a[max-1-i]=exch;
  }
  for (i=0;i<max;++i)
  printf ("%d ", a[i]);
  
 }