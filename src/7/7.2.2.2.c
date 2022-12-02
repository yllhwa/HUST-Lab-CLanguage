#include "stdio.h"
#include "stdlib.h"
struct s_list
{
    int data;            /* 数据域 */
    struct s_list *next; /* 指针域 */
};
void create_list(struct s_list **headp, int *p);
void main(void)
{
    struct s_list *head = NULL, *p;
    int s[] = {1, 2, 3, 4, 5, 6, 7, 8, 0}; /* 0为结束标记 */
    create_list(&head, s);                 /* 创建新链表 */
    //传入head的地址，否则复制型的传参不会改变head的值
    p = head; /*遍历指针p指向链头 */
    while (p)
    {
        printf("%d\t", p->data); /* 输出数据域的值 */
        p = p->next;             /*遍历指针p指向下一结点 */
    }
    printf("\n");
}
void create_list(struct s_list **headp, int *p)
{
    struct s_list *loc_head = NULL, *tail = NULL;
    int len = 0;
    int *tmp = p;
    while (*p++)
    {
        len++;
    }
    p -= 2;

    for (; len > 0; len--)
    {
        loc_head = (struct s_list *)malloc(sizeof(struct s_list));
        loc_head->data = *tmp++; /* 对数据域赋值 */
        loc_head->next = tail;
        tail = loc_head;
    }
    *headp = loc_head; /* 使头指针headp指向新创建的链表 */
}