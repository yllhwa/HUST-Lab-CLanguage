#include<stdio.h>
#include<stdlib.h>  //malloc��stdlib����
#include<string.h>
#define N 4
char *(*p[2])(const char *,const char *);
/*��ָ������sָ���size���ַ���������������*/
void strsort(char *s[], int size)
{
	char *temp;  //�Ӻ�������temp��ָ��
	int i, j;
	for(i=0; i<size-1; i++)
	{
		for (j=0; j<size-i-1; j++)
		if (p[1](s[j],s[j+1])>0)  //��������
		{
			temp = s[j];
    		s[j] = s[j+1];
			s[j+1] = temp;
		}
	}
}

int main()
{
	int i;
	p[0]=strcpy;
    p[1]=strcmp;
	char *s[N], t[50];
	for (i=0; i<N; i++)
	{
		gets(t);
		s[i] = (char *)malloc(strlen(t)+1);
		p[0](s[i],t);  //�˴���t�����¿��ٵĿռ�
	}
	strsort(s,i);  //�˴�����������
	for (i=0; i<N; i++)	puts(s[i]);
	return 0;
}