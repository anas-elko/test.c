#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double m;
    printf("entre a b c : ");
    scanf("%lf %lf %lf",&a,&b,&c);

  m  = pow((a * b * c),1.0/3.0);

  printf("%.2lf",m);
}