#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//结构体
//复杂对象
//struct
//结构体是把一些单一类型组合到一起

//学生
struct stu {
	//结构体成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct stu* pp)
{
	printf("%s %d %s %s\n",(*pp).name, (*pp).age, (*pp).sex, (*pp).tele);
	//->
	//结构体的指针变量->成员名
	printf("%s %d %s %s\n", pp->name, pp->age, pp->sex, pp->tele);
}
int main()
{
	struct stu s = { "张三",20,"男","1564645" };
	//结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}