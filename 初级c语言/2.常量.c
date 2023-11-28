#include <stdio.h>
//常量
//1.字面常量
//2.const修饰的常变量 
//3.define 定义的标识符常量 
//4.枚举常量 

//视频p7

//int main(){
//	//1.字面常量
//		30;
//		30.1;
//		"abc";
//		'a';//字符 
//	//2.const修饰的常变量 
//		const int a = 10;
//		//a =20; //这里会报错，const修饰的常变量不能被修改 
//	
//	return 0;
//} 

//#define MAX 100 //定义MAX为100
//#define STR "dscbdk" //定义STR为 dscbdk
//
//int main(){
//	printf("%d\n",MAX);//输出为100 
//	int a= MAX;
//	//MAX=200;//err报错，不能修改 
//	printf("%d\n",a);//输出为100 
//	printf("%s\n",STR);//输出为 dscbdk 
//	return 0;
//} 


//枚举常量
enum Color{//枚举类型 
	//枚举常量 
	RED,
	GREEN,
	BLUE//一般大写字母 
};
enum Sex{
	MALE,
	FEMALE,
	SRCRET//保密 
}; 
int main(){
	//三原色
	//red green blue
	enum Color c = RED;
	//RED =20;//err,枚举常量不能修改 
	return 0;
} 

