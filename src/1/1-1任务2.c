/*ʵ��1-1����Ĵ�����ٵ�����Դ����*/
#include<stdio.h>
#define PI 3.14159//ԭ:#define PI 3.14159; ĩβ��";"Ҳ�����ȥ,Ҫ��";"ȥ��
int main()
{
    int f ;
    short p, k ;
    double c, r, s ;

/* ����2 */
    printf("input the radius r:");
    scanf("%lf", &r);//ԭ:scanf("%f", &r); r��double��,�����������%f,�����������ֿ�%f��%lf
    s = PI * r * r;
    printf("\nThe acreage is %.2f\n\n",s);//ԭ:printf("\nThe acreage is %.2f\n\n",&s); �������"&"
}