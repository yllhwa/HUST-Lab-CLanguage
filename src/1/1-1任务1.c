/*ʵ��1-1����Ĵ�����ٵ�����Դ����*/
#include<stdio.h>
#define PI 3.14159;
int main()
{
    int f ;
    short p, k ;
    double c, r, s ;

/* ����1 */
    printf("Input Fahrenheit: " ) ;
    scanf("%d", &f ) ; //ԭ:scanf("%d", &f ) �˴�scanfû��ָ��&f����д����f
    c = 5.0/9.0 * (f-32) ;//ԭ:c = 5/9 * (f-32) �˴�5/9=0(int��),������ô�㶼��0
    printf( "\n %d (F) = %.2f (C)\n\n ", f, c ) ;
    return 0;
}