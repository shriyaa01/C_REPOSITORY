#include<stdio.h>
void main()
{
    int a[100][100],m,n;
    printf("ENTER NUMBER OF ROWS AND COLUMN (m*n): \n");
    scanf("%d%d",&m,&n);
    printf("ENTER ELEMENT IN MATRIX : \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("REQUIRED MATRIX IS : \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("TRANSPOSE OF ABOVE MATRIX : \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}