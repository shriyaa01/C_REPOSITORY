#include<stdio.h>
void main()
{
    int a[10][10], b[10][10],c[10][10],m,n,l,p;
    printf("ENTER NUMBER OF ROW AND COLUMN FOR FIRST MATRIX \n");
    scanf("%d%d",&m,&n);
     printf("ENTER NUMBER OF ROW AND COLUMN FOR SECOND MATRIX \n");
    scanf("%d%d",&l,&p);
    if(l!=n)
        printf("MULTIPLICATION IS NOT POSSIBLE\a\n");
    printf("ENTER ELEMENTS IN FIRST MATRIX \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER ELEMENTS IN MATRIX IN SECOND MATRIX \n");
    for(int i=0; i<l; i++){
        for(int j=0; j<p; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("ENTERED FIRST MATRIX \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("ENTERED SECOND MATRIX \n");
    for(int i=0; i<l; i++){
        for(int j=0; j<p; j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            c[i][j]=0;
            for(int k=0; k<n; k++)
            {
                  c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("OUR RESULTANT MATRIX \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

}