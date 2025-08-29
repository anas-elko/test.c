#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float b;
    float c;
    float d;
    float x1;
    float x2;
  

    printf("entre a b c : ");
    scanf("%f %f %f",&a,&b,&c);

    d = pow(b,2)-4*a*c;
    printf("dilta is  = %.2f",d);

    if(d > 0)
    {
        x1 = (-b - sqrt(d))/(2*a);
        x2 = (-b + sqrt(d))/(2*a);

        printf("\nSolutions: x1 = %.2f", x1);
        printf("\nsolutiions : x2 : %.2f",x2);
    }
    else if(d == 0)
    {
         x1 = -b / (2*a);
         printf("\n d = 0 : x1 = %.2f",x1);
    }
    else
    {
         printf("\nIl n'y a pas de solutions reelles");
    }
}