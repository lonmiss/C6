#include<stdio.h>
#include<math.h>
int main()
{
	int b;
	scanf("%d",&b);
	int i;
	int a[1000];
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	int j,l;
	for(j=0;j<b-1;j++)
	{
		for(l=0;l<b-j-1;l++)
		{
			if(a[l]>a[l+1])
			{
				int b=a[l];
				a[l]=a[l+1];
				a[l+1]=b;
			}
		}
	}
	/*for(i=0;i<b;i++)
	{
		printf("%d\n",a[i]);
	}*/
	
	int sum1=0,sum2=0;
	for(i=0;i<=b;i+=2)
	{
		sum1 +=a[i];
	}
	for(i=1;i<=b;i+=2)
	{
		sum2 +=a[i]; 
	} 
	printf("%d",abs(sum1-sum2));
	return 0;
} 
