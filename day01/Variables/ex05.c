#include<stdio.h>

int main()
{
    float c;

    printf("entre the c: ");
    scanf("%f",&c);

    if(c < 0)
    {
        printf("Solide");
    }
    else if(c >= 0 && c < 100)
    {
        printf("Liquide");
    }
    else 
    printf("gaz");
}