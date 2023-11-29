#include <stdio.h>

/*
int main()
{
//	char 字符数据类型 
//	short 短整型 
//	int 整形 
//	long long 长整型 
//	float 单精度浮点型 
//	double 双精度浮点型 
//	8bit=1byte
//	1kb=1024byte 
	printf("%d\n",sizeof(char));//打印出来的是字节	
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));

	
	return 0; 
}


//变量和常量
int age = 10;//全局变量 
int main(){

	int age = 21;//局部变量 
	float weight = 45.6;
	int high = 165;
	printf("age=%d\n",age); 
	
	
	return 0; 
}

//写一个代码，计算2个整数的值 
int main()
{
	int num1 = 0;
	int num2 = 0;//初始化 
	//scanf是一个输入函数
	//printf是一个输出函数 
	scanf("%d %d",&num1,&num2);//输入两个函数 ,
	///注意：scanf"%d"里面不要写中文,要写中文可以加printf语句 
	
	//求和
	int sum = num1 + num2;
	
	//输出
	printf("%d",sum); 
	return 0;
}

//变量的作用域
//1.局部变量
//局部变量的作用域是变量所在的局部范围 

//2.全局变量 

//变量的生命周期
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。 
//全局变量的生命周期是：整个程序的生命周期 



//声明来自外部的符号
#include "初识c语言.c"//调用外部的全局变量 
extern int a; //调用外部的全局变量 

*/

int main()
{
	int a=0; 
	printf("%d",a);
	
	return 0; 
} 








