#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int result=1;
	int i=1;
	while(i<=n){
		result *= i;
		i++;
	}
	printf("%d",result) ;
} 
