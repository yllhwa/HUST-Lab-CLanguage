#include <stdio.h>
long long sum_fac(int); 
int main()
{
    int k;
    for(k=1;k<=20;k++)
        printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}
long long sum_fac(int n)
{
    long long s=0;
    long long fac;
    int i;
    fac = 1; 
    for(i=1;i<=n;i++)
    {	
		fac *=i; 
    }
    if(n == 1) return 1;
    else s =sum_fac(n-1) + fac;
    return s;
}