#include<stdio.h>

int main()
{
    int n;
    printf("======================\n");
    printf("entre the n : ");
    scanf("%d",&n);
    printf("\n======================\n");

    if(n < 0)
    {
        printf("Négati");
    }
    else if(n > 0)
    {
        printf("Positif");
    }
    else 
    {
        printf("NULL");
    }
}