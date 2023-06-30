#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5},*ptr=a;
    for(int i=0; i<5; i++)
    {
        printf("ELEMENT AT POSITION %d is %d \t",i,*(ptr+i));
        printf("ADDRESS OF ELEMENT AT INDEX %d is %d \n",i,ptr+i);
    }
}