#include <stdio.h>

//选择语句
//if else
//switch 

//int main()
//{
//	int input=0;
//	printf("选择1/0\n");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("选择了1"); 
//		
//	}
//	else
//	{
//		printf("选择了0"); 
//	 } 
//	
//	return 0;
//}

//循环语句

int main()
{
	int line =0;
	printf("打开电脑\n"); 
	
	while(line<100)
	{
		
		printf("好好学习%d\n",line);
		line++;
	}
	if(line>=100)
	{
		printf("学完了\n");
	}
	else
	{
		printf("继续努力\n");
	}
	return 0;
}
 


