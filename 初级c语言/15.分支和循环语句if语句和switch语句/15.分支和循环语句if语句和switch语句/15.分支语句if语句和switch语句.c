#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//c���
//1.���ʽ���
//2.�����������
//3.�������
//4.�������
//5.�����

//��������Ϊ�������ࣺ
// 1.��֧��䣺if��䣬switch��䣻
// 2.ѭ��ִ����䣺do while��䣬while��䣬for��䣻
// 3.ת����䣺break��䣬goto��䣬continue��䡣


//��֧���


int main() {
	//if(���ʽ){
	//	�����䣻�������Ҫ������
	// }
	//else 
	//	�����䣻�������Ҫ�����ţ�����Ĭ��ֻ�����һ�����

	int age = 10;
	if (age < 18)
		printf("������");
	else if (age >= 18 && age < 28)
		printf("����");
	else if (age >= 28 && age < 40)
		printf("����");
	else
		printf("����");

	//if��䣬����ѡһ��

	int a = 0;
	int b = 1;
	if (a == 1)
		if (b == 1)
			printf("1");
		else//else�Ǹ��������if
			printf("2");

	//����ӡ������else�Ǹ��������if
	// if��else��������һ�����

	
	//1.�����������������壬�淶��
	//2.�ո񣬿��У�����

	int num = 3;
	if (5 == num)//if(num == 5)һ���ģ���ܴ���num=5��
		printf("hi");


	//��ϰ1���ж�һ�����Ƿ�Ϊ����
	

	int n = 0;
	printf("\n������һ��������", n);
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("%dΪż��\n", n);
	else
		printf("%dΪ����\n", n);

	//���1-100������
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
		
	printf("�����ĸ���Ϊ��%d\n", count);





	//switch���

//	switch�����ͱ��ʽ��
//	{
//		����
//		//case ���γ������ʽ��
//		//��䣻
//	}


	int day = 5;
	switch (day) {//day��ʲôֵ���ͽ����ĸ�case���
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");//��day=5����� ������ ������
		//û��break�Ļ���һֱд����Ķ���ֱ��д���������break
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}

	//day==1��5�����weekday��67�����weekend
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
	default:	//�����벻��1-7������,����default
		printf("ѡ�����\n");
		break;
	}
	return 0;
}