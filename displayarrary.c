#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        printf("ELEMENT AT POSITION %d is %u \t",i,a[i]);
        printf("ADDRESS OF ELEMENT AT INDEX %d is %d \n",i,&a[i]);
    }
}