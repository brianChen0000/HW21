//
//  main.c
//  HW21
//
//  Created by Mac on 2019/5/30.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
struct servitor
{
    char id[8],name[12];
    int a,b,payment;
};
void calc(struct servitor *);
int main(void)
{
    struct servitor emp;
    printf("-------------------------------------------------\n");
    printf("                 Servitor手機結構體                 \n");
    printf("-------------------------------------------------\n");
    printf("請輸入編號,姓名,時薪,工作時數: ");
    scanf(" %s %s %d %d", emp.id, emp.name, &emp.a, &emp.b);
    calc(&emp);
    printf("月收入: %d\n", emp.payment);
    system("pause");
    return 0;
}
void calc(struct servitor *p)
{
    p->payment=p->a*p->b;
}



