//search
/**
�ҳ�key������a�е�λ��
key ҪѰ�ҵ�����
a   ҪѰ�ҵ�����
length ����a�ĳ���
return ����Ҳ���������a��λ�ã��򷵻�-1������ҵ�������a��λ��
int search(int key,int a[],int length); 
**/ 
#include<stdio.h>
int search(int key,int a[],int length)
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i]==key)
		{
			ret=i;
			break;	
		} 
	}
	return ret;
}
int main()
{
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int target;
	printf("������һ�����֣�"); 
	scanf("%d",&x) ;
	target=search(x,a,sizeof(a)/sizeof(a[0]));
	if (target==-1)
	{
		printf("��Ǹû��!\n");
	}else
	{
		printf("%d������λ����a[%d]\n",x,target);
		printf("���������ĵ�%d��",target+1);
	}
	return 0;
}






//����ü��ɳ�ʼ��
//int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};

//���ɳ�ʼ��ʱ�Ķ�λ
/*int a[10]={
	[0]=2,[2]=3,6};
	��ʾa[0]=2,a[2]=3,a[3]=6 */ //���ԱȽϷ��������ֵ 
//a[]�����о���û��ֵҲ֧��

//����Ĵ�С
//sizeof����������ռ���ݵĴ�С����λ���ֽ� 
//sizeof��������������ռ���ݵĴ�С����λ���ֽ� 
//sizeof(a[0])���������е���Ԫ�صĴ�С 
//����Ĵ�С��sizeof(a)/sizeof(a[0]) 

//����ĸ�ֵ 
/* int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
int b[]=a; THIS IS WORING!!!*/ //���鲻��ֱ�Ӹ�ֵ 
//Ҫ��һ�����������Ԫ�ؽ�����һ�����飬������ñ���
/*	for (i=0;i<length;i++)
	{
		b[i]=a[i];	
	} */


/*#include<stdio.h>
int main()
{
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	printf("%d\n",sizeof(a));
	printf("%d",sizeof(a)/sizeof(a[0]) );
	return 0;	
} */ 


/*#include<stdio.h>
int main()
{
	int a[13]={[1]=2,[5]=5,6,7,8,9,[11]=-55};
	int i;
	for(i=0;i<13;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
} */



/*#include<stdio.h>
int main()
{
	int i; 
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	for(i=0;i<13;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
} */ 
