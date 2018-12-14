#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);//a为一个十进制的数  b转化的进制 
	int sum[100];
	int t=0;
	int i;
	for(i=0;a>0;i++)
	{
		sum[i]=a%b;
		a=a/b;
	//	printf("%d",sum[i]);
	}
	//printf("\n");
	int d =i;
	//printf("%d\n",d);
	int j;
	for(j=d-1;j>=0;j--)
	{
		printf("%d",sum[j]);
	}
	
	
	
	return 0; 
} 
