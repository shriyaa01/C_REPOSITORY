#include<stdio.h>
void main()
{
    int r,s;
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&r);
    int a[r];
    printf("ENTER ELEMENTS IN ARRAY: \n");
    for(int i=0; i<r; i++)
         scanf("%d",&a[i]);
    for(int i=0; i<r; i++)
        for(int j=0; j<r-i; j++)
            if(a[j]>a[j+1])
            {
                s=a[j];
                a[j]= a[j+1] ;
                a[j+1]=s;
            }
    printf("SORTED ARRAY GOES LIKE: \n"); 
    for(int i=0; i<r; i++)
        printf("%d \n",a[i]);
}