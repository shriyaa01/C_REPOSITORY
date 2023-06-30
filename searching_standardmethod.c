#include<stdio.h>
int main()
{
    int n,key;
    printf("ENTER THE LENGTH OF ARRAY:  \n");
    scanf("%d \n",&n);
    int a[n];
    printf("ENTER ELEMENT IN ARRAY \n");
    for(int i=0; i<n; i++)
         scanf("%d",&a[i]);
    printf("OUR ARRAY IS: \n");
    for(int i=0; i<n; i++)
         printf("%d \n",a[i]);
    printf("ENTER NUMBER YOU WANT TO SEARCH : \n");
    scanf("%d",&key);
    for(int i=0; i<n; i++)
    {
        if(a[i]==key){
            printf("ELEMENT %d FOUND AT INDEX %d \n",key,i);
            return 0;
        }
    }
    printf("ELEMENT %d IS NOT FOUND \n", key);
    return 0;        
}