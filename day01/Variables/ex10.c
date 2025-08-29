#include<stdio.h>
#include<math.h>

int main()
{
    double m,r;

    printf("entre the r : ");
    scanf("%lf",&r);

    m = (4.0/3.0) * M_PT * pow(r,3);

    printf("%.2lf",m);
}