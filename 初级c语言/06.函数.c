#include <stdio.h>

//���� 
add(int x, int y)
{
//	int z =x+y;
//	return z;
	
	return(x+y); 
}


//����������������ֵ 
int main()
{
	int a,b; 
	
	//���� 
	printf("������������\n");
	scanf("%d %d",&a,&b);
	
	//���� 
	//int sum = a + b;
	int sum =add(a,b);
	
	
	//���
	printf("sum=%d",sum) ;
	
	return 0;
 } 
