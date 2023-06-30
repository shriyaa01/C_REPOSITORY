#include<stdio.h>
#include<math.h>
void main()
{
   int a[10][10],m,n,trace=0,norm=0,p=0;
   printf("ENTER NUMBER OF ROW AND COLUMN \n");
   scanf("%d%d",&m,&n);
   printf("ENTER  ELEMENT IN MATRIX \n");
   for(int i=0; i<m; i++)
   {
       for(int j=0; j<n; j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   printf("ENTERED  MATRIX IS \n");
   for(int i=0; i<m; i++)
   {
       for(int j=0; j<n; j++)
       {
           printf("%d\t",a[i][j]);
           norm=norm+a[i][j]*a[i][j];
       }
       trace+=a[i][i];
       printf("\n");
   }
   p=sqrt(norm);
   printf("NORM OF THE MATRIX IS: %d\n ",p);
   printf("TRACE OF A MATRIX IS  %d\n",trace);
}