#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count=0;
	int a=0;
	printf("���Ѿ������һ��һ��֮�������");
	do{
		count++;
		printf("�²�������Ƕ��٣�");
		scanf("%d",&a);
		if (a>number ){
			printf("�Ƚϴ�\n");} 
		else if(a<number){
			printf("�Ƚ�С\n");}
		//else if(a=number){
		//	printf("��ϲ�㣬һ�ξͲ¶��ˣ�");}
				 
		} while(number != a);
		printf("��ϲ������%d�β¶��ˣ�",count);
		return 0;
	}
 
