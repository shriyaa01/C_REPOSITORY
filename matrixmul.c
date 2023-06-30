#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2],t=0;
    printf("ENTER THE FIRST MATRIX:");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE SECOND MATRIX:");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("DISPLAY THE FIRST MATRIX: \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("DISPLAY THE SECOND MATRIX: \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    } 
    printf("RESULTANT MATRIX IS: \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
                c[i][j]=a[i][t]*b[t][j]+a[i][t+1]*b[t+1][j];
                printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}