/* ʵ��1-2����������޸���Դ���� */
#include <stdio.h>
int main( )
{
int m, n, k, p, i, d;
printf("input m, n \n");
scanf("%d%d", &m, &n);
if (m<n)									/* ����m��n */
{
	m = m^n;
	n = m^n;
	m = m^n;//����m,n
}
k = 0;
while ((m&1)==0 && (n&1)==0)			/* m��n��Ϊż�� */
{
		m = m>>1;								/* ��2Լ��m��n */
		n = n>>1;
		k++;
}
p = 1;
p = p<<k;			/* ��p=2^k */
while((d=m-n)!=n)
{
		if(d>n) m = d;
		else
		{
			m-=(n=d);
		}
}
d *=p;
printf("the greatest common divisor : %d", d);
return 0;
}
