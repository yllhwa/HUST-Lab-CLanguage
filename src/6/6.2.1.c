#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	char *s1, *s2, *s3;
	char str1[20],str2[20],str3[20];
	s1=str1,s2=str2,s3=str3;  //��ָ��ָ���ռ�
	printf("Input a string:\n");  //����s2
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	//s1=str1;  //ָ�븴λ��������Ǵ�ͷ��ʼ�򲻱ظ�λ
	printf("Input a string again:\n");  //����s2
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}

/*���ַ���s���Ƹ��ַ���t�����ҷ��ش�t���׵�ַ*/
char * strcopy(char *t, const char *s)
{
	char *tmp=t;  //���ݴ洮t��ͷ��λ��������
	while(*t++ = *s++);
	return (tmp);
}