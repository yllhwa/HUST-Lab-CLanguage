#include<stdio.h>
int main()
{
	int n;
	char a[100];
	scanf("%d",&n);
	int i;
	for(i=0;i<16;i++)
	{
		a[i]=(n&(1<<(16-i-1)))?'1':'0';  //�������ֵ˵����һλ��1��������0
	}
	for(i=0;i<16;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}