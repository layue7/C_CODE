//8.��ҵ 
#include <stdio.h>

//����������ȴ�С���ú���

int max(int x,int y){
	if(x>y)
	{
		return x;
	}
	else 
	{
	return y;
	}
} 	
int main()
{
	int a= 0;
	int b= 0;
	int c =0;
	printf("��������������"); 
	scanf("%d %d %d",&a,&b,&c);
	int d=max(max(a,b),c);
	printf("max=%d",d);
	return 0;
 }
 
 
 
