#include<stdio.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	int t=a;
	int y1=1;
	while(a/10!=0)
	{
		a /=10; 
		y1 *=10;
	} 
	printf("%d\n",y1);
	printf("%d\n",t);
	
	y1=y1*10;
	while(y1>1)
	{
		int v=0;
		y1/=10;
		v=t/y1;
		printf("%d",v);
		if(y1>9)
		{
		printf(" ");
		}
		t %=y1;
	}
}

/*#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=1;
	int d=10;
	scanf("%d",&a);
	int t=a;
	while(a/10!=0)
	{
		c++;
		a /=10; 
	} 
	printf("%d\n",c);
	
	int y1=1;
	while(c>0)
	{
		y1 *=10;
		c--;
	}
	printf("%d\n",y1);
	printf("%d\n",t);
	
	
	while(y1>0)
	{
		int v=0;
		y1/=10;
		v=t/y1;
		printf("%d",v);
		if(y1>1)
		{
		printf(" ");
		}
		t %=y1;
		
	}
	
}*/

/*#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=1;
	for(a>0;a/=10;b++)
	{
		
	}
	printf("%d",b);
	return 0;
}*/





/*#include<stdio.h>
int main()
{
	int a,b;
	int sum=0;
	scanf("%d",&a);
	int z=a;
	do
	{	b=0;
		b=a%10;
		sum=sum*10+b;
		a /= 10;
	}while(a>0);
	printf("%d\n",sum);
	
	do
	{
		b=0;
		b=sum%10;
		
		printf("%d",b);
		if(sum>9)
		{
			printf(" ");
		}
		sum /= 10;
	}while(sum>0);
	printf("\n");
	
	do
	{
		b=0;
		b=z%10;
		
		printf("%d",b);
		if(z>9)
		{
			printf(" ");
		}
		z /= 10;
	}while(z>0);
	
	return 0;
}*/



//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	scanf("%d",&a);
//	b=0;
//	do
//	{
//		c=a%10;
//		b=b*10+c;
//	 } while(a>0); 
//	printf("%d",b);
//	
//	
//	
//	int o,d;
//	do
//	 {
//	 	int o=0;
//	 	o =	b%10;
//	 	b =b/10;
//	 	printf("%d",o);
//		if(d>9)
//		{
//			printf(" ");
//		}
//	 }while(b>10);
//	 
//	return 0;
//	 
//} 
