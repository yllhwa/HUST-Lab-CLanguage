/* ʵ��2-1�Ĵ�����򣺺����ж���*/
#include <stdio.h>
int main()
{ 
int i, x, k, flag = 0;
printf("�������жϺ��������������1����������Ctrl+Z����\n");
while (scanf("%d", &x) !=EOF)
{
    for(i=2,k=x>>1;i<=k&&flag==0;i++)//����һ��&&flag==0
    {
        if (!(x%i))
	    {
	   	    flag = 1;
	    }
    }
    if(flag==1)
    {
    	printf("%d�Ǻ���", x);
    }
    else
    {
	    printf("%d���Ǻ���", x);
    }
    flag = 0;
}
return 0;
}