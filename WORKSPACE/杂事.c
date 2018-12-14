//ÔÓÊÂ 
#include<stdio.h>
void swap(int a,int b)
{
	int swap;
	int t=a; 
	a=b;
	b=t;
	printf("swap,a=%d,b=%d\n",a,b);
}


int main()
{
	int a=5;
	int b=6;
	
	swap(a,b);
	{
	  int a=0;
	  // int a=10;
	  printf("%d\n",a);	
	}	
	
	printf("a=%d,b=%d\n",a,b);
	
	return 0;
}
