#include<stdio.h>
#include<math.h>
int main()
{
	int n; 
	scanf("%d",&n);
	int x = 0;
	for(x=pow(10,n-1);x<pow(10,n);x++)
	{
		int temp = x;
		int sum = 0, a = 0, i;
		for(i = 1; i <= n; i++)
		{
		    a = temp%10; //���һλ 
		    temp /= 10;  //ȥ����һλ 
		    sum += pow(a,n);
	    }
		if(sum == x) 
		{
		    printf("%10d",x);
		}	
	}
	printf("\n");
	return 0;
}