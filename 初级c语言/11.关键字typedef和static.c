#include <stdio.h>

//typedef ����������
 
typedef unsigned int uint;//uint�ȼ�unsigned,���������� 

typedef struct Node
{
	int data;
	struct Node* next;
}Node;//Node�ȼ�struct Node 


//static �������α����ͺ���

//1.���ξֲ�����������Ϊ��̬�ֲ����� 
//�ֲ���������������Ҳ�����٣������Ǹı��˱����Ĵ洢λ�ã��������ڱ䳤���ͳ������������һ�� 

// λ�ã�ջ�����ֲ�����������̬������̬������ȫ�ֱ����� 
 
//2.����ȫ�ֱ���������Ϊ��̬ȫ�ֱ��� 

//3.���κ���������Ϊ��̬���� 
//������ȫ�ֱ������Ǳ��������ⲿ�������ԣ���static����ڲ��������� 
 



void test1()
{
	int a = 1;
	a++;
	printf("%d\n",a);
}//a ���˷�Χ������ 


void test2()
{
	static int a = 1;//a ���������򣨷�Χ�������� 
	a++;
	printf("%d\n",a);
}


//ȫ�ֱ���
int test_a = 10; 

//staric int test_b = 10; //�������С�ˣ�����ڲ����������ˣ�ֻ�ܱ�Դ�ļ�ʹ�� 

//ȫ�ֱ����Ǿ����ⲿ�������Ե� 

int main()
{	
	unsigned int num = 0; 
	uint num2 = 1;//uint�ȼ�unsigned 
	struct Node n;
	Node n2;//Node�ȼ�struct Node 
	
	
	int i = 0;
	while(i<10)//10��2 
	{
		test1();
		i++;
	 } 
	while(i<10)//2��11 
	{
		test2();
		i++;
	 } 	
	 
	printf("ȫ�ֱ���=%d\n",test_a);
	//printf("ȫ�ֱ���=%d\n",test_b);
		
	return 0;
}





//register �����Ĵ���

//�Ĵ���			�ռ�С��۸� 
//���ٻ���
//�ڴ�
//Ӳ�� 				�ռ�����С 
//
//int main(){
//	//�Ĵ������� 
//	//register int num = 3;//���� 3 ����ڼĴ�����
//	return 0; 
//} 
