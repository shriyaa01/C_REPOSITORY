#include<stdio.h>
void main()
{
    int a[10],i;
    printf("ENTER AGE OF YOUR TEN FRIENDS : \n");
    for(i=0; i<10; i++ )
        scanf("%d \n",&a[i]);
    printf(" AGE OF YOUR TEN FRIENDS ARE : \n");
    for(i=0; i<10; i++ )
        printf("%d \n",a[i]);
}
