#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//define 定义标识常量
#define NUM 100

//define 定义宏
//宏是有参数的，宏是完成替换的
#define ADD(x,y) ((x)+(y))
//ADD宏名；x y 宏的参数；参数是无类型的；((x)+(y))宏体

int main() {

	printf("NUM=%d\n", NUM);
	int n = NUM;
	printf("n=%d\n", n);
	int arr[NUM] = { 0 };


	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("add=%d\n", c);

	return 0;
}