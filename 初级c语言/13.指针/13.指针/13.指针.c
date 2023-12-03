#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指针
//内存会划分为一个个的内存单元（一个内存单元的大小：1btye）
//每个内存单元都有一个编号

int main() {


	int a = 10;//向内存申请4个字节，存储10
	//&a;//取地址符
	printf("%p\n", &a);

	int* p = &a;
	//int说明p指向的对象a是int类型的
	// *说明p是指针变量
	//p就是指针变量
	
	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象

	printf("%d\n", a);
	//内存单元
	//编号->地址->地址也被称为指针
	//存放指针（地址）的变量就是指针变量

	char ch = 'c';
	char* q = &ch;


	int* p1;
	char* p2;
	//不管说明类型的指针都是在创建指针变量
	//指针变量的大小取决于一个地址存放的时候需要多大空间
	//32位机器上的地址：32bit位——4byte，故指针大小是4个字节
	//64位机器上的地址：64bit位——8byte，故指针大小是8个字节

	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%d\n", sizeof(int*));//sizeof用zu比较好
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;

}