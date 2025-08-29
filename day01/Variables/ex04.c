#include<stdio.h>

int main()
{
    float ms;
    float kmh;
    printf("entre the km/h : ");
    scanf("%f",&kmh);

    ms = kmh *  0.27778;

    printf("*******info*******\n");
    printf("%f",ms);
}