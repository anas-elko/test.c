#include<stdio.h>

int main()
{
    int a,sum,b;

    printf("entre the a : ");
    scanf("%d",&a);
    printf("entre the b : ");
    scanf("%d",&b);

    sum = a + b;
    if(a == b)
    {
        sum = sum * 3;
    }

    printf("the sum  = %d",sum);
}