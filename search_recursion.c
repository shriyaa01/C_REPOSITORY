#include<stdio.h>
int search(int *a,int size,int i,int key)
{
    if(i<size){
      if(a[i]==key)
              return i;
      return search(a,size,i+1,key);
    }
    return -1;
}
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
    if(search(a,n,0,key)==-1){
         printf("ELEMENT %d IS NOT FOUND \n", key);
    }
    else{
         printf("ELEMENT %d FOUND AT INDEX %d \n",key,search(a,n,0,key));
    }
    return 0;
}