#include<stdio.h>
struct student
{
    int id;
    char* name[1];
    int per;
}a[2];
void main()
{
    a[0].id=1;
    a[0].name[0]="yu";
    a[1].name[0]="SHRIYA";
    a[0].per=99;
    printf("DETAILS \n");
    printf("POLL NO IS %d \n NAME IS %s %s \n PERCENTAGE IS %d \n",a[0].id,a[0].name[0],a[1].name[0],a[0].per);
}