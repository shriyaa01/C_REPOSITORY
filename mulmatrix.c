#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("ENTER THE FIRST MATRIX:");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE SECOND MATRIX:");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("DISPLAY THE FIRST MATRIX: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("DISPLAY THE SECOND MATRIX: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    } 
    printf("RESULTANT MATRIX IS: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
                c[i][j]=0;
                for(int k=0; k<3; k++)
                       c[i][j]+=a[i][k]*b[k][j];
                printf("%d ",c[i][j]); 
        }
        printf("\n");
    }


}
