#include<stdio.h>
#include<stdlib.h>  //malloc��stdlib����
#include<string.h>
#define N 3
char *delete_bank(char *s)
{
	while(*s==' '||*s=='\t')
	{
		s++;
	}
	return s;
}
int main()
{
	int i;
	char *s[N], t[80];
	char *s1[N];
	for (i=0; i<N; i++)
	{
		gets(t);
		s[i] = (char *)malloc(strlen(t)+1);
		s1[i] = s[i];
		strcpy(s[i],t);  //�˴���t�����¿��ٵĿռ�
		s[i]=delete_bank(s[i]);
	}
	for (i=0; i<N; i++)	puts(s[i]);
	for (i=0; i<N; i++)
	{
		free(s1[i]);
	}
	return 0;
}
