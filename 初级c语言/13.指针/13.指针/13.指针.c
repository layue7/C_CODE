#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ָ��
//�ڴ�Ữ��Ϊһ�������ڴ浥Ԫ��һ���ڴ浥Ԫ�Ĵ�С��1btye��
//ÿ���ڴ浥Ԫ����һ�����

int main() {


	int a = 10;//���ڴ�����4���ֽڣ��洢10
	//&a;//ȡ��ַ��
	printf("%p\n", &a);

	int* p = &a;
	//int˵��pָ��Ķ���a��int���͵�
	// *˵��p��ָ�����
	//p����ָ�����
	
	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���

	printf("%d\n", a);
	//�ڴ浥Ԫ
	//���->��ַ->��ַҲ����Ϊָ��
	//���ָ�루��ַ���ı�������ָ�����

	char ch = 'c';
	char* q = &ch;


	int* p1;
	char* p2;
	//����˵�����͵�ָ�붼���ڴ���ָ�����
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
	//32λ�����ϵĵ�ַ��32bitλ����4byte����ָ���С��4���ֽ�
	//64λ�����ϵĵ�ַ��64bitλ����8byte����ָ���С��8���ֽ�

	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%d\n", sizeof(int*));//sizeof��zu�ȽϺ�
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;

}