#include<stdio.h>
void main()
{
    int a[10],n,num,result=0,i=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        result=result*10;
        a[i]=num%10;
        num=num/10;
        result=result+a[i];
        i++;
    }
    if(result==n)
         printf("THE NUMBER IS PALIDROME \n");
    else
         printf("THE NUMBER IS NOT PALIDROME \n");
}
