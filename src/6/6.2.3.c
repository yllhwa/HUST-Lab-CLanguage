#include "stdio.h"
char *strcpy(char *,char *);
void main(void)
{
    char a[60],b[60]="there is a boat on the lake."; //a����С��
    printf("%s\n",strcpy(a,b));

}
char *strcpy(char *s,char *t)
{
	char *tmp=s;
    while(*s++=*t++);
    return (tmp);//���س�ʼ��ָ��
}