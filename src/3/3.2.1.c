/*ʵ��3-1�Ĵ�����򣺼���s=1!+2!+3!+��+n!*/
#include <stdio.h>
long long sum_fac(int n); //������
int main()
{
    int k;
    for(k=1;k<=20;k++)
         printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}
long long sum_fac(int n) //long̫С��װ����
{
    long long s=0;
    long long i,fac;
    fac = 1;  //fac�ȳ�ʼ��
    for(i=1;i<=n;i++)
	{
		fac*=i;
		s+=fac;  //s��+Ҫ����ѭ������
    }
    return s;
}