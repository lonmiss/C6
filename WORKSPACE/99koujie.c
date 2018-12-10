#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("1\n");
	for(a=1;a<=9;a++){
		for(b=1;b<=9;b++){
			if(b<=a){
			printf("%d*%d=%d",a,b,a*b);
		}
		}
	printf("\n");		
	printf("%d\n",a);	
	}
	return 0;
}
