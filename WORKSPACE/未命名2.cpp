#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	a++;
	while(a<10){
		b++;
		while(b<10){
			printf("%d*%d=%d\n",a,b,a*b);
			
		}
	}
	
	return 0;
}
