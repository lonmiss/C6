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
//	printf("���ʱ��Ϊ%dСʱ%d���ӡ�\n",ih,im);
//	printf("%d\n",5==3);
//	printf("%d\n",5>3);
//	printf("%d\n",5<=3);
//	printf("%d\n",7>=3+4);



	int price=0;
	int bill=0;
	int result; 
	
	printf("�������Ԫ����");
	scanf("%d",&price);
	printf("������Ʊ�棺");
	scanf("%d",&bill);
	if (bill<price){
		printf("��������Ǯ����!!!");
		
	}
	result = bill-price;
 	printf("�������Ǯ��%d��Ԫ����",result);





	return 0; 
 } 
