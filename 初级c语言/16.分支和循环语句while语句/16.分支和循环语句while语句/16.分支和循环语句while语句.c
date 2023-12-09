#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//循环语句
//while
//for
//do while


int main()
{

	//while（表达式）
	//	循环语句；

	//表达式为真，就一直循环，当表达式为假，就停止循环

	//打印1-100的数字
	int i = 1;
	int count = 0;
	while (i <= 100) {

		if (22 == i)
			break;	//到22就停止循环了

//		if (5 == i)
//			continue;	//跳过后面的代码，死循环
		printf("%d ", i);
		i++;
		count++;
		if (count % 10 == 0) 
			printf("\n");
	}

	//while循环的
	// break是用于永久的终止循环
	//continue跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断




	//while (getchar())
	//int ch = getchar();//接收字符
	//printf("%c\n", ch);//1，一样的
	//putchar(ch);//2,一样的
	//EOF;//end of file,文件结束标准

	int ch = 0;
	while ((ch = getchar())!=EOF) {
		putchar(ch);
	}
	//用处：
	//例子1
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);//password本来就是一个地址，所以前面不用加&
	// getchar();//读取了\n,有空格就不行了
	int c = 0;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}//读取了\n
	printf("请确认密码（Y/N）：>");
	int ret = getchar();
	if ('Y' == ret) {
		printf("yes\n");
	}
	else {
		printf("no\n");

	}

	//例子2
	//只打印数字，跳过其他字符
	char ch1 = '\0';//ASCII的0
	while ((ch1 = getchar()) != EOF) {
		if (ch1 < '0' || ch1>'9')
			continue;
		putchar(ch1);
	}



	return 0;
}