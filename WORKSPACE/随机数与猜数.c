#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count=0;
	int a=0;
	printf("我已经想好了一到一百之间的数。");
	do{
		count++;
		printf("猜猜这个数是多少：");
		scanf("%d",&a);
		if (a>number ){
			printf("比较大\n");} 
		else if(a<number){
			printf("比较小\n");}
		//else if(a=number){
		//	printf("恭喜你，一次就猜对了！");}
				 
		} while(number != a);
		printf("恭喜你用了%d次猜对了！",count);
		return 0;
	}
 
