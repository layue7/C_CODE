#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ṹ��
//���Ӷ���
//struct
//�ṹ���ǰ�һЩ��һ������ϵ�һ��

//ѧ��
struct stu {
	//�ṹ���Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct stu* pp)
{
	printf("%s %d %s %s\n",(*pp).name, (*pp).age, (*pp).sex, (*pp).tele);
	//->
	//�ṹ���ָ�����->��Ա��
	printf("%s %d %s %s\n", pp->name, pp->age, pp->sex, pp->tele);
}
int main()
{
	struct stu s = { "����",20,"��","1564645" };
	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}