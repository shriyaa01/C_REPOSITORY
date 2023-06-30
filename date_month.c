#include<stdio.h>
#include<stdlib.h>
void date(int *,int *);
void main()
{
    int month,day;
    date( &day,&month);
    printf("day is %d, month is %d \r",day,month);
    // exit(EXIT_SUCCESS);
}
void date(int *day_p,int *month_p)
{
    int day_ret,month_ret;
    *day_p=day_ret;
    *month_p=month_ret;
}
