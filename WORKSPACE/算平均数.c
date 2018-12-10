#include<stdio.h>
int main()
{
	int sum=0;
	int count=0;
	int number;
	scanf("%d",&number);
	while (number!=-1){
		sum += number;
		count++;
		scanf("%d",&number);
	}
	printf("%.4f",1.0*sum/count);
	return 0;
}






//#include<stdio.h>
//int main()
//{
//	int sum=0;int count=0;
//	int number;
//	do{
//		scanf("%d",&number);
//		if(number !=-1){
//			
//			sum += number;
//			count++;
//		}}
//		while(number !=-1);
//		printf("%.2f\n",1.0*sum/count);
//
//	
//	
//	return 0; 
//}
