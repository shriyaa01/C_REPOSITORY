#include<stdio.h>
void main()
{
    int e,n,p,i;
    printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ARRAY ELEMENTS:");
    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENT TO BE ENTERED:");
    scanf("%d", &e);
    printf("ENTER THE INDEX OF THE ELEMENT:");
    scanf("%d",&p);
    for(i=n-1; i>=p; i--)
        a[i+1]=a[i];
    a[p]=e;
    printf(" ARRAY IS \n");
    for(int i=0; i<n; i++)
           printf("%d \n", a[i]);
}