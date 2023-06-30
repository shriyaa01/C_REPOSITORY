#include<stdio.h>
void main()
{
    int a[100],n,s=0,b=0;
    printf("ENTER SIZE OF ARRAY: \n");
    scanf("%d",&n);
    printf("ENTERED ELEMENT IN ARRAY: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTERED ARRAY IS: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d \n",a[i]);
    }
    s=a[0];
    b=a[0];
    for(int i=1; i<n; i++)
    {
        if(s>a[i]){
            s=a[i];
        }
        else if(a[i]>b)
        {
            b=a[i];
        }
    }
    printf("THE BIGGEST ELEMENT OF THE ARRAY IS %d \n",b);
    printf("THE SMALLEST ELEMENT OF THE ARRAY IS %d \n",s);
}