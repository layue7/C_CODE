#include <stdio.h>
#include <string.h>
//int main()
//{
//	//char 字符类型
//	//'a'
//	//hjlklbs#@
//	//char ch ='w'
//	//字符串
//	//c语言没有字符串类型 
//	
//	char arr1[10]="abc"; 
//	//叫arr的字符串类型的数组，里面可以放十个字符串,可以不写数字 
//	//3,a b c \0,字符串的结束标志是\0 
//	char arr2[] ={'a','b','c'};
//	char arr3[] ={'a','b','c','\0'};//手动加一个结束标志，他就正常了 
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);//没有\0,他会一直往后找 
//	printf("%s\n",arr3);
//	
//		
//	//头文件要加上#include <string.h>
//	int len=strlen("abc");//求字符串长度的函数strlen()
//	printf("%d\n",len);
//	printf("%d\n",strlen(arr1)); 
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",strlen(arr3));
//	
//	return 0;
//} 


////////转义字符
//三子母词,早期编译器会有这种情况 
//??) --> ]
//??( --> [ 

//%d 打印整型
//%c 打印字符
//%s 打印字符串
//%f 打印float类型的数据
//%lf  打印double类型的数据 
//%zu 打印sizeof的返回值 

//int main()
//{
//	printf("abcn");
//	printf("abc\n");//"\n"换行
//	printf("abcd0efg\n");
//	printf("abcd\0efg\n");//"\0"结束字符串 
//	printf("\n");
//	printf("\?\n");//防止转成三字母词
//	printf("%c\n",'a');
//	printf("%c\n",'\'');//打印'字符 
//	printf("%s\n","abc");
//	printf("abcdef");
//	printf("abcd\\0efg\n");//结果 abcd\0efg
//	printf("\a");//蜂鸣 
//	
//	// \ddd ,八进制(0-8组成)的130转成十进制88再转成ASCII码的X
//	printf("%c\n",'\130');	//X
//	
//	// \dd  十六进制60转换为十进制96再转换成ASCII代码的、
//	printf("%c\n",'\x60'); // 、 
//
//
//	printf("%d\n",strlen("c:\test\628\test.c"));//14个字符，\t和\62为一个字符 
// 
//	return 0;
//	
//} 



///////注释

// c++的注释风格

/* c的注释风格 ,不能嵌套注释 
int main()
{
	
	int * p = NULL;
	return 0;
 } 
*/



