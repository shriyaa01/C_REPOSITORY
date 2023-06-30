#include<stdio.h>
void main(){
    int a[10][10],m,n,flag=0;
    printf("ENTER NUMBER OF ROW AND COL \n");
    scanf("%d%d",&m,&n);
    printf("ENTER ELEMENT IN MATRIX \n");
    for(int i=0; i<m; i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("ENTERED MATRIX \n");
    for(int i=0; i<m; i++){
        for (int j = 0; j < n; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<m; i++){
        for (int j = 0; j <i; j++)
        {
            if(a[i][j]!=0){
                flag=1;
            }
        }
    }
    if(flag==1)
         printf("IT IS NOT UPPER TRIANGULAR MATRIX \n");
    else
         printf("IT IS UPPER TRIANGULAR MATRIX \n");
          

}