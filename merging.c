#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],m,n,p=0,q=0,r=0;
    printf("ENTER NO OF ELEMENT IN FIRST ARRAY: \n");
    scanf("%d",&m);
    printf("ENTER NO OF ELEMENT IN SECOND ARRAY: \n");
    scanf("%d",&n);
    printf("ENTER ELEMENT IN FIRST ARRAY\n");
    for(int i=0; i<m; i++)
         scanf("%d",&a[i]);
    printf("ENTER ELEMENT IN SECOND ARRAY \n");
    for(int i=0; i<n; i++)
         scanf("%d",&b[i]);
    printf("OUR FIRST ARRAY IS \n");
    for(int i=0; i<m; i++)
         printf("%d \n",a[i]);
    printf("OUR SECOND ARRAY GOES \n");
    for(int i=0; i<n; i++)
         printf("%d \n",b[i]);
     while(p<m && q<n){
          if(a[p]<b[q]){
              c[r]=a[p++];
              r=r+1;
          }
          else{
               c[r]=b[q++];
               r=r+1;
          }
     }
     while(m>p){
          c[r]=a[p];
          p=p+1;
          r=r+1;
     }
     while(n>q){
          c[r]=a[q];
          q=q+1;
          r=r+1;
     }
    printf("OUR MERGED ARRAY IS: \n");
    for(int i=0; i<r; i++){
         printf("%d \n",c[i]);
    }
    
     
}