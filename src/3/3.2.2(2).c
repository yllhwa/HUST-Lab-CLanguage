/*ʵ��3-2�����޸��滻��(2)����򣺸��ݹ�ʽ���� s*/
#include<stdio.h>
double sum(double x,int n)
{
	int i;
	double z=1.0;
	double last_mulx=1;
	long long last_fac=1;
	for(i=1;i<=n;i++)
	{
		z=z+(last_mulx*x)/(last_fac*i);
		last_mulx*=x;
		last_fac*=i; //�����ϴε�ֵ
	}
    return z;
} 
int main()
{
 	double x;
	int n;
	printf("Input x and n:");
	scanf("%lf%d",&x,&n);
	printf("The result is :%lf",sum(x,n));
    return 0;	  
}