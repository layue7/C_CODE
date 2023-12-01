#include <stdio.h>

//函数 
add(int x, int y)
{
//	int z =x+y;
//	return z;
	
	return(x+y); 
}


//求两个任意整数的值 
int main()
{
	int a,b; 
	
	//输入 
	printf("输入两个整数\n");
	scanf("%d %d",&a,&b);
	
	//运算 
	//int sum = a + b;
	int sum =add(a,b);
	
	
	//输出
	printf("sum=%d",sum) ;
	
	return 0;
 } 
