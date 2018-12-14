#include<stdio.h>

int main()
{
//	int hour1,mi1;
//	int hour2,mi2;
//	
//	scanf("%d %d",&hour1,&mi1);
//	scanf("%d %d",&hour2,&mi2);
//	
//	int ih=hour2-hour1;
//	int im=mi2-mi1;
//	if (im < 0) {
//		im = 60 + im;
//		ih--;
//	}
//	
//	printf("相差时间为%d小时%d分钟。\n",ih,im);
//	printf("%d\n",5==3);
//	printf("%d\n",5>3);
//	printf("%d\n",5<=3);
//	printf("%d\n",7>=3+4);



	int price=0;
	int bill=0;
	int result; 
	
	printf("请输入金额（元）：");
	scanf("%d",&price);
	printf("请输入票面：");
	scanf("%d",&bill);
	if (bill<price){
		printf("你所带的钱不够!!!");
		
	}
	result = bill-price;
 	printf("所找你的钱是%d（元）。",result);





	return 0; 
 } 
