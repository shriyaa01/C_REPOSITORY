#include<stdio.h>
void main()
{
    int a[20],even=0,odd=0,n;
    printf("ENTER LENGTH OF ARRAY \n");
    scanf("%d",&n);
    printf("ENTER ELEMENT IN ARRAYY \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
              even+=a[i];
        else
            odd+=a[i];
    }
    printf("SUM OF EVEN IS %d \n",even);
    printf("SUM OF ODD NUMBER IS %d \n",oddzx);
    

}