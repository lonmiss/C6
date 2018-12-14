//二维数组哦
/*int a[3][5]
通常理解为a是一个3行5列得矩阵*/ 
//井字棋 
#include<stdio.h>
int main()
{
	const int size = 3;
	int board[size][size];
	int i,j;
	int num0fx;
	int num0fo;
	int result=-1; // -1:没人赢，1：X赢，0：O赢
	// 读入矩阵
	for (i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&board[i][j]);
		}
	}
	//检查行
	for(i=0;i<size && result == -1;i++)
	{
		num0fo =num0fx=0;
		for(j=0;j<size;j++)
		{
			if(board[i][j]==1)
			{
				num0fx ++;
			}else
			{
				num0fo++;
			}
		}
		if (num0fo==size)
		{
			result = 0;
		}else if(num0fx == size)
		{
			result =-1;
		}
	}
	if(result == -1)
	{
		for(j=0;j<size && result == -1;i++)
		{
			num0fo =num0fx=0;
			for(i=0;i<size;i++)
			{
				if(board[i][j]==1)
				{
					num0fx ++;
				}else
				{
					num0fo++;
				}
			}
			if(num0fo ==size)
			{
				result=0;
			}else if(num0fx==size)
			{
				result=1;
			}
	    }
			
	} 
	//检查对角线 
	num0fo=num0fx=0;
	for(i=0;i<size;i++)
	{
		if(board[i][i]==1)
		{
			num0fx++;
		}else
		{
			num0fo++;
		}
	}
	if(num0fo==size)
	{
		result=0;
	}else if(num0fx==size)
	{
		result =1;
	}
	num0fo=num0fx=0;
	for(i=0;i<size;i++)
	{
		if(board[i][size-i-1]==1)
		{
			num0fx++;
		}else
		{
			num0fo++;
		}
			
	} 
	return 0;
}






/*#include<stdio.h>
int main()
{
	int i=0,j=0;
	int a[i][j]; 
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			a[i][j]=i*j;
			printf("%d*%d=%d",j,i,a[i][j]);
			printf(" ");
		}
		printf("\n");
	 } 
	return 0; 
 } */
