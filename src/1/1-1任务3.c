/*ʵ��1-1����Ĵ�����ٵ�����Դ����*/
#include<stdio.h>
#define PI 3.14159//ԭ:#define PI 3.14159; ĩβ��";"Ҳ�����ȥ,Ҫ��";"ȥ��
int main()
{
    int f ;
    short p, k ;
    double c, r, s ;

/* ����3 */
    short newint;//֮ǰ������û�������������
    k = 0xa1b2, p = 0x8432;
    newint = (p&0xff00)|((k>>8)&0x00ff);//newint=-95,k=-24142
    printf("new int = %hx\n\n",newint);
    return 0;newint = (p&0xff00)|((k>>8)&0x00ff);
}