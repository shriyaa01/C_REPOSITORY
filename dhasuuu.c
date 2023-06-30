#include<stdio.h>
int a[100];
void insert(int n)
{
    int j;
    printf("ENTER ELEMENT IN ARRAY; \n");
    for( j=0; j<n; j++)
    {
        scanf("%d",&a[j]);
    }
}
void delete(int n)
{
    int index;
    printf("ENTER INDEX OF ELEMENT YOU WANT TO DELETE \n");
    scanf("%d",&index);
    for(int i=index; i<n; i++ )
    {
       a[i]=a[i+1];
    }
    a[n-1]=0;
}
void traversal(int n)
{
    printf("OUR ARRAY IS \n");
    for(int i=0; i<n; i++)
    {
        printf("%d \n",a[i]);
    }
}
void main()
{
    int choice,n;
    printf("ENTER LEN OF ARRAY \n");
    scanf("%d",&n);
   do{
       printf("1->INSERTION IN ARRAY  \n 2->DELETION IN ARRAY \n 3->DISPLAYING THE ARRAY \n 4->EXIT \n");
       printf("ENTER YOUR CHOICE \n");
       scanf("%d",&choice);
       switch(choice)
       {
           case(1):
                  insert(n);
                  break;
            case(2):
                   delete(n);
                   break;
            case(3):
                  traversal(n);
                  break;
            case(4):
                  printf("program ended \n");
                  break;
            default:
                 printf("WRONG CHOICE \n");
                 break;
       }
   }while(choice!=4);
}