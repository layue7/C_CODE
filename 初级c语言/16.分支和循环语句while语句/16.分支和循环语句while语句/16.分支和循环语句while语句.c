#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ѭ�����
//while
//for
//do while


int main()
{

	//while�����ʽ��
	//	ѭ����䣻

	//���ʽΪ�棬��һֱѭ���������ʽΪ�٣���ֹͣѭ��

	//��ӡ1-100������
	int i = 1;
	int count = 0;
	while (i <= 100) {

		if (22 == i)
			break;	//��22��ֹͣѭ����

//		if (5 == i)
//			continue;	//��������Ĵ��룬��ѭ��
		printf("%d ", i);
		i++;
		count++;
		if (count % 10 == 0) 
			printf("\n");
	}

	//whileѭ����
	// break���������õ���ֹѭ��
	//continue��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�




	//while (getchar())
	//int ch = getchar();//�����ַ�
	//printf("%c\n", ch);//1��һ����
	//putchar(ch);//2,һ����
	//EOF;//end of file,�ļ�������׼

	int ch = 0;
	while ((ch = getchar())!=EOF) {
		putchar(ch);
	}
	//�ô���
	//����1
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password);//password��������һ����ַ������ǰ�治�ü�&
	// getchar();//��ȡ��\n,�пո�Ͳ�����
	int c = 0;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}//��ȡ��\n
	printf("��ȷ�����루Y/N����>");
	int ret = getchar();
	if ('Y' == ret) {
		printf("yes\n");
	}
	else {
		printf("no\n");

	}

	//����2
	//ֻ��ӡ���֣����������ַ�
	char ch1 = '\0';//ASCII��0
	while ((ch1 = getchar()) != EOF) {
		if (ch1 < '0' || ch1>'9')
			continue;
		putchar(ch1);
	}



	return 0;
}