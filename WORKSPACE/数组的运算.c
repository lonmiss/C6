//search
/**
找出key在数组a中的位置
key 要寻找的数字
a   要寻找的数组
length 数组a的长度
return 如果找不到其中在a的位置，则返回-1；如果找到返回在a的位置
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
	printf("请输入一个数字："); 
	scanf("%d",&x) ;
	target=search(x,a,sizeof(a)/sizeof(a[0]));
	if (target==-1)
	{
		printf("抱歉没有!\n");
	}else
	{
		printf("%d在数组位置是a[%d]\n",x,target);
		printf("是这组数的第%d个",target+1);
	}
	return 0;
}






//数组得集成初始化
//int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};

//集成初始化时的定位
/*int a[10]={
	[0]=2,[2]=3,6};
	表示a[0]=2,a[2]=3,a[3]=6 */ //可以比较方便的来赋值 
//a[]括号中就算没有值也支持

//数组的大小
//sizeof给出数组所占内容的大小，单位是字节 
//sizeof给出整个数组所占内容的大小，单位是字节 
//sizeof(a[0])给出数组中单个元素的大小 
//数组的大小：sizeof(a)/sizeof(a[0]) 

//数组的赋值 
/* int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
int b[]=a; THIS IS WORING!!!*/ //数组不能直接赋值 
//要把一个数组的所有元素交给另一个数组，必须采用遍历
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
