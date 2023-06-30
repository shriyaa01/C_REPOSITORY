#include<stdio.h>
void main()
{
    char a[5];
    printf("ENTER ELEMENT IN ARRAY \n");
    for(int i=0; i<5; i++)
        scanf("%c",&a[i]);
    printf("DISPLAYING ARRAY \n");
    for(int i=0; i<5; i++)
         printf("%c \n",a[i]);
}