#include <stdio.h>
int main()
{
    int n,x,y,temp;
    int i,j,flag;
    scanf("%d",&n);
    for(x=12345;x<=98765;x++)
    {
        int a[10]={0};//���������λ��
        flag = 1;
        temp = x;
        if(x%n == 0)//��y����λ //Ҫ�����ż�
        {
            y = x/n;
            for(i=4;i>=0;i--)
            {
                a[i] = y%10;
                y = y/10;
            }
        }
        for(i=9;i>=5;i--)//��x����λ
        {
            a[i] = temp%10;
            temp = temp/10;

        }
        for(i=0;i<9;i++)//�ظ���ľ��
        {
            for(j=i+1;j<=9;j++)
            {
                if(a[i] == a[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==0)
                break;
        }

        if(flag==1)
        {
            for(i=5;i<=9;i++)
                printf("%d",a[i]);
            printf("/");
            for(i=0;i<5;i++)
                printf("%d",a[i]);
            printf("=%d\n",n);
        }
    }
    return 0;
}