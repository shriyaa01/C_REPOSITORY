#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],n;
    printf("ENTER LENGTH OF ARRAY \n");
    scanf("%d",&n);
    printf("INSERT ELEMENT IN ARRAY \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("DISPLAYING \n");
    for(int i=0; i<n; i++)
    {
         printf("%d \n",a[i]);
    }
    printf("INSERTING ELEMENT FROM ARRAY1 TO ARRAY2 IN  REVERSE ORDER \n");
    for(int i=0; i<n; i++)
    {
        b[i]=a[n-1-i];
    }
    printf("INSERTED SUCCESSFULLY!!!!!!!!!!!!!!!!!! \n");
    printf("DISPLAYING SECOND ARRAY \n");
    for(int i=0; i<n; i++)
    {
         printf("%d \n",b[i]);
    }
    printf("ADDING ELEMENT OF BOTH MATRIX \n");
    for(int i=0; i<n; i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("OUR RESULTANT MATRIX IS \n");
    for(int i=0; i<n; i++)
    {
        printf("%d \n",c[i]);
        
    }
}