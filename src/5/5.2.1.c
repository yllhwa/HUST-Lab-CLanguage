/*ʵ��5-1����Ĵ�����ٵ��������*/
#include<stdio.h>
void strcate(char [],char []);
void strdelc(char [],char );
int main(void)
{
	char a[]="Language", b[20]="Programming";
	printf("%s %s\n", b,a);
	strcate(b,a);
	printf("%s %s\n",b,a);
	strdelc(b, 'a');
	printf("%s\n",b);
	return 0;
}
void strcate(char t[],char s[])
{
	int i = 0,  j = 0;
	while(t[i]) i++;  //ͳ��t�ĳ���
	while((t[i++]=s[j++])!= '\0') ;
}
void strdelc(char s[], char c)
{
	int j,k;
	for(j=0,k=0; s[k] != '\0'; j++)  //�ж�s[k]�ǲ���\0
	{
		if(s[j] != c)
		{
			s[k++] = s[j];
		}
	}
	s[k]='\0';
}