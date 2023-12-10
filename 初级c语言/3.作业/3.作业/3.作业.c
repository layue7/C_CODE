#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//'a';//97
//int main() {
//	printf("%c\n", 'a');
//	printf("%c\n", 97);//a
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算arr的个数
//	while (i < sz) {
//		printf("%c\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//
//int main() {
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);
//	//输出数据
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	//%02d,0指前面补0，2指2位，不够两位就补0
//	return 0;
//}
//int main()
//{	//输入
//	int id = 0;
//	float c = 0.0f;
//	float sx = 0.0f;
//	float english = 0.0f;
//	scanf("%d;%f,%f,%f", &id,&c,&sx,&english);
//	//输出
//	printf("The each subject score of NO.%d is %.2f, %.2f, %.2f.", id, c, sx, english);
//	return 0;
//}
//int main() {
//	int n = printf("Hello world!");
//	//打印printf("Hello world!");调用的返回值
//	printf("\n%d\n",n);
//	return 0;
//}
//int main() {
//	//输入
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	//输出
//	int e=((a > b ? a : b) > c ? (a > b ? a : b) : c) > d ? ((a > b ? a : b) > c ? (a > b ? a : b) : c) : d;
//	printf("%d\n", e);
//	return 0;
//}

//int main()
//{
//	float r = 0.0f;
//	scanf("%f", &r);
//	float v = 4 / 3.0* r*r*r * 3.1415926;
//	//4 / 3.0要3.0不能3
//	printf("%.3f", v);
//	return 0;
//}
//计算bmi，体重/身高的平方
int main()
{
	int sg = 0;
	int tz = 0;
	scanf("%d %d", &tz, &sg);
	
	float bmi = tz/((sg/100.0)*(sg/100.0));
	printf("%.2f",bmi);
	return 0;
}


