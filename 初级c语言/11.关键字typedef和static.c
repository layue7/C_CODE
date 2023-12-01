#include <stdio.h>

//typedef 类型重命名
 
typedef unsigned int uint;//uint等价unsigned,类型重命名 

typedef struct Node
{
	int data;
	struct Node* next;
}Node;//Node等价struct Node 


//static ——修饰变量和函数

//1.修饰局部变量——称为静态局部变量 
//局部变量出了作用域也不销毁，本质是改变了变量的存储位置，生命周期变长，和程序的生命周期一样 

// 位置：栈区（局部变量），静态区（静态变量，全局变量） 
 
//2.修饰全局变量——称为静态全局变量 

//3.修饰函数——称为静态函数 
//函数和全局变量都是本来具有外部链接属性，用static变成内部链接属性 
 



void test1()
{
	int a = 1;
	a++;
	printf("%d\n",a);
}//a 出了范围就销毁 


void test2()
{
	static int a = 1;//a 出了作用域（范围）不销毁 
	a++;
	printf("%d\n",a);
}


//全局变量
int test_a = 10; 

//staric int test_b = 10; //作用域变小了，变成内部链接属性了，只能本源文件使用 

//全局变量是具有外部链接属性的 

int main()
{	
	unsigned int num = 0; 
	uint num2 = 1;//uint等价unsigned 
	struct Node n;
	Node n2;//Node等价struct Node 
	
	
	int i = 0;
	while(i<10)//10个2 
	{
		test1();
		i++;
	 } 
	while(i<10)//2到11 
	{
		test2();
		i++;
	 } 	
	 
	printf("全局变量=%d\n",test_a);
	//printf("全局变量=%d\n",test_b);
		
	return 0;
}





//register ——寄存器

//寄存器			空间小造价高 
//高速缓存
//内存
//硬盘 				空间大造价小 
//
//int main(){
//	//寄存器变量 
//	//register int num = 3;//建议 3 存放在寄存器中
//	return 0; 
//} 
