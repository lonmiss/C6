#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("1\n");
	for(a=3;a<=100;a++)
	{
		int c=1;
		for (b=2;b<a;b++)
		{
			if (a%b==0)
			{
				c=2;
				break;
			}}
			
		if(c==1)
		{
			printf("%d\n",a);
		}
		
	}
	return 0;
 } 









//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c=1;
//	scanf("%d",&a);
//	for (b=2;b<a;b++){
//		if (a% b == 0){
//			c=2;
//			break;
//		}
//	}
//	if(c==1){
//		printf("是素数\n");
//	} else{
//		printf("不是素数\n");
//	}
//}
//




//#include<stdio.h>
//int main()
//{
//	int a=0;
//	int b;
//	int c=0;
//	scanf("%d",a);
//	for (b=1;b<a;b++){
//		if (a%b==0){
//		c=1;
//		break;}
//	}
//	if(c=0){
//		printf("不是"); 
//	}else if(c=1){
//		printf("是");
//	}
//	
//	return 0; 
//}
