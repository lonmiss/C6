#include<stdio.h>
int main()
{
	const double rate =8;
	const int standard = 40;
	double pay=0.0;
	int hours;
	
	printf("请输入工作的小时数：");
	scanf("%d",&hours);
	
	if(hours>standard){
		pay=40*8.25 + (hours-standard)*8*1.5;
	} 
	else{
		pay=hours*rate;
	}
	printf("你的工资是%lf",pay);
	return 0;
}
