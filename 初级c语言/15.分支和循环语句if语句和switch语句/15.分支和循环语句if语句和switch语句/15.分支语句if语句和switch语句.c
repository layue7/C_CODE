#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//c语句
//1.表达式语句
//2.函数调用语句
//3.控制语句
//4.复合语句
//5.空语句

//控制语句分为以下三类：
// 1.分支语句：if语句，switch语句；
// 2.循环执行语句：do while语句，while语句，for语句；
// 3.转向语句：break语句，goto语句，continue语句。


//分支语句


int main() {
	//if(表达式){
	//	表达语句；多条语句要用括号
	// }
	//else 
	//	表达语句；多条语句要用括号，否则默认只会控制一个语句

	int age = 10;
	if (age < 18)
		printf("青少年");
	else if (age >= 18 && age < 28)
		printf("青年");
	else if (age >= 28 && age < 40)
		printf("中年");
	else
		printf("老年");

	//if语句，多条选一条

	int a = 0;
	int b = 1;
	if (a == 1)
		if (b == 1)
			printf("1");
		else//else是跟着最近的if
			printf("2");

	//不打印东西，else是跟着最近的if
	// if和else合起来是一条语句

	
	//1.变量的命名（有意义，规范）
	//2.空格，空行，换行

	int num = 3;
	if (5 == num)//if(num == 5)一样的，规避错误num=5；
		printf("hi");


	//练习1：判断一个数是否为奇数
	

	int n = 0;
	printf("\n请输入一个整数：", n);
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("%d为偶数\n", n);
	else
		printf("%d为奇数\n", n);

	//输出1-100的奇数
	int number;
	int count = 0;
	for (number = 1; number <= 100; number++) {
		if (number % 2 == 1) {
			printf("%d ", number);
			count++;
		}
		if (count % 10 == 0)
			printf("\n");
	}
		
	printf("奇数的个数为：%d\n", count);





	//switch语句

//	switch（整型表达式）
//	{
//		语句项；
//		//case 整形常量表达式：
//		//语句；
//	}


	int day = 5;
	switch (day) {//day是什么值，就进入哪个case语句
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");//若day=5，输出 星期五 星期六
		//没有break的话会一直写后面的东西直到写完或者遇到break
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	}

	//day==1到5就输出weekday，67就输出weekend
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:	//若输入不是1-7的数字,进入default
		printf("选择错误\n");
		break;
	}
	return 0;
}