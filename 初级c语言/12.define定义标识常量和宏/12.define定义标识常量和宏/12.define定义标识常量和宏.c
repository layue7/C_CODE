#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//define �����ʶ����
#define NUM 100

//define �����
//�����в����ģ���������滻��
#define ADD(x,y) ((x)+(y))
//ADD������x y ��Ĳ����������������͵ģ�((x)+(y))����

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