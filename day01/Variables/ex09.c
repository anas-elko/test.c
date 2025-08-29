#include<stdio.h>
#include<math.h>

int main()
{
    double x1,x2,y1,y2,z1,z2;
    double m;
    printf("entre the x1 x2 : ");
    scanf("%lf %lf",&x1,&x2);
    printf("entre the y1 y2 : ");
    scanf("%lf %lf",&y1,&y2);
    printf("entre the z1 z2 : ");
    scanf("%lf %lf",&z1,&z2);
 
    m = sqrt(pow((x1-x2),2) + pow((y1-y2),2) + pow((z1-z2),2)) ;
 
    printf("%.2lf",m);
}