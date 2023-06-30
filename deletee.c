#include<stdio.h>
void main()
{
    int e,n,i;
    printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ARRAY ELEMENTS:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE INDEX OF THE ELEMENT TO BE DELETED:");
    scanf("%d", &e);
    for(int i=e; i<n; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=0;
    printf(" ARRAY IS \n");
    for(int i=0; i<n; i++)
           printf("%d \n", a[i]);
}
