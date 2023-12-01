//8.作业 
#include <stdio.h>

//设计三个数比大小，用函数

int max(int x,int y){
	if(x>y)
	{
		return x;
	}
	else 
	{
	return y;
	}
} 	
int main()
{
	int a= 0;
	int b= 0;
	int c =0;
	printf("请输入三个整数"); 
	scanf("%d %d %d",&a,&b,&c);
	int d=max(max(a,b),c);
	printf("max=%d",d);
	return 0;
 }
 
 
 
