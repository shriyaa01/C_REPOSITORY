#include<stdio.h>
void main()
{
    char *ptr[4]={"shriya","are","you","alive"};
    for(int i=0; i<4; i++)
    {
        printf("%s ",ptr[i]);
    }
}