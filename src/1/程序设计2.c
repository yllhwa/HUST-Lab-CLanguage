#include<stdio.h>
int main()
{
	unsigned short x, m, n;
	scanf("%x %hu %hu",&x,&m,&n);
	if (!(((m>=0)&&(m<=15))&&((n>=1)&&(n<=16-m))))//���0 �ܣ�� 15, 1 �� ��� 16-m����,�������
	{
		printf("������Χ����");
		return 0;
	}
	x = x>>m;
	x = x<<(16-n);
	printf("%x",x);
	return 0;
}