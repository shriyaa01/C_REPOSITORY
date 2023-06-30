#include<stdio.h>
void main()
{
    int m[2][4]={{1,2,3,4},{5,6,7,8}};
    int *ptr;
    ptr=m;
    printf("\n m=%u ",m);
    printf("\n m[0]=%u ",m[0]);
    printf("\n &m[0][0]=%u ",&m[0][0]);
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
             printf("ELEMENT %d \t",*ptr);
             printf("ADDRESS OF ELEMENT is %d \n",ptr);
             ptr++;
        }
    }
}