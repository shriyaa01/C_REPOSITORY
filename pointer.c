#include<stdio.h>
int main()
{
    int x=2,*p;
    p=&x;
    *p=0;
    printf("x is %d \n",x);
    printf("*p is %d \n",*p);
    *p+=1;
    printf("x is %d \n",x);
    printf("*p is %d \n",*p);
    (*p)++;
    printf("x is %d \n",x);
    printf("*p is %d \n",*p);
    return 0;
}

