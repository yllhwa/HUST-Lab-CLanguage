/* ʵ��2-1�Ĵ�����򣺺����ж���*/
#include <stdio.h>
#include<iostream>
using namespace std;
int main( )
{ 
int i, x, k, flag = 0;
printf("�������жϺ��������������1����������Ctrl+Z����\n");
while (scanf("%d", &x) !=EOF) 
{
    i=2,k=x>>1;
    do 
    {
    	if (i>k) break;
    	if (!(x%i))
	    {
	   	    flag = 1;
	    }
	    i++;
	}while(i<=k&&flag==0);
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
