#include<stdio.h>

int main()
{
    int a,b,c,m;

    printf("entre a  : ");
    scanf("%d",&a);
    printf("entre b  : ");
    scanf("%d",&b);
    printf("entre c: ");
    scanf("%d",&c);

    m = (a * 2 + b * 3 + c * 5) / (10);

    printf("m = %d",m);
}