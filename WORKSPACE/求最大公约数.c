#include<stdio.h>
int main()
{
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
		printf("%d, %d, %d\n",a,b,t);
	 } 
	 printf("%d",a);
	return 0;
}




/*#include<stdio.h>
int main()
{
	int a;
	int b;
	int t;
	scanf("%d",&a);
	scanf("%d",&b);
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
			

		
	printf("%d",a);
		
	return 0;
 } */
