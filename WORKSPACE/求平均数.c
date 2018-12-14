#include<stdio.h>
int main()
{
	int x,b;
	int a=0;
	int sum=0;
	int number[100];
	scanf("%d",&x);
	while(x!=-1)
	{
		number[a]=x;
		//printf("%d\n",number[a]);
		sum += x;
		a++;
		scanf("%d",&x);
		
	}
	int average=sum/a;
	for(b=0;b<=a;b++)
	{
		if(average<number[b])
		{
			printf("%d\n",number[b]);
		}
	}
	printf("%d %d",sum,average);
	return 0;
}

