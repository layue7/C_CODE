#include <stdio.h>
//����
//1.���泣��
//2.const���εĳ����� 
//3.define ����ı�ʶ������ 
//4.ö�ٳ��� 

//��Ƶp7

//int main(){
//	//1.���泣��
//		30;
//		30.1;
//		"abc";
//		'a';//�ַ� 
//	//2.const���εĳ����� 
//		const int a = 10;
//		//a =20; //����ᱨ��const���εĳ��������ܱ��޸� 
//	
//	return 0;
//} 

//#define MAX 100 //����MAXΪ100
//#define STR "dscbdk" //����STRΪ dscbdk
//
//int main(){
//	printf("%d\n",MAX);//���Ϊ100 
//	int a= MAX;
//	//MAX=200;//err���������޸� 
//	printf("%d\n",a);//���Ϊ100 
//	printf("%s\n",STR);//���Ϊ dscbdk 
//	return 0;
//} 


//ö�ٳ���
enum Color{//ö������ 
	//ö�ٳ��� 
	RED,
	GREEN,
	BLUE//һ���д��ĸ 
};
enum Sex{
	MALE,
	FEMALE,
	SRCRET//���� 
}; 
int main(){
	//��ԭɫ
	//red green blue
	enum Color c = RED;
	//RED =20;//err,ö�ٳ��������޸� 
	return 0;
} 

