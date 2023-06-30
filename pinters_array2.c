#include<stdio.h>
void main()
{
    char *ptr[4];
    char a[20]="shriya",b[10]="are",c[9]="you",d[6]="alive";
    ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;
    ptr[3]=d;
    for(int i=0; i<4; i++)
    {
        printf("%s ",ptr[i]);
    }
}