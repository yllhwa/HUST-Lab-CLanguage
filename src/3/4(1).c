#include <stdio.h>
#include <math.h>
int is_veg(int n);
int main(void)
{
    int num, i = 2;
    scanf("%d", &num);
    while(!(is_veg(i) && is_veg(num-i)))  //������Ҫ������,������һ��
        i++;
    printf("%d = %d + %d", num, i, num - i);
    return 0;
}
int is_veg(int n)
{
    int i, j;
    for (i = 2, j = (int)sqrt(n); i <= j; i++)
        if (n % i) //���������ͼ���
            continue;
        else
            return 0;
    return 1;
}