#include<stdio.h>
void swap(int a,int b)
{
	int t;
	if (a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	printf("%d<%d",a,b);
}
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(a,b);
	return 0;
} 









/*#include<stdio.h>
void cheer(int i)
{
	printf("cheer %d\n",i);
}
//C语言在调用函数时，永远只能传值给函数 
int main()
{
	cheer(2.0);
	return 0;
 } */
 
 
 
  
