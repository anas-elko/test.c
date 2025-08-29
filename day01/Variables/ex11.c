#include<stdio.h>

int main()
{
    double longueur,largeur;
    double m;

    printf("entre the longueur && largeur");
    scanf("%lf %lf",&longueur,&largeur);

    m = longueur * largeur;

    printf("%.2lf",m);
}