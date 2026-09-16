#include<stdio.h>
#include<math.h>

int  main()

{
	float num=1860,result;
	 
	result=log10f(num);

	printf("log(%.1f)=%.2f \n",num,result);

	return 0;
}
