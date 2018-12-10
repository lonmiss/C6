#include<stdio.h>
int main()
{
	int a=0;
	int ret=0;
	int b=0;
	
	scanf("%d",&a);
	while(a>0){
		b=a%10;
		a=a/10;
		 
		ret= ret*10+b;}
	printf("%d",ret);
	return 0;	
}
