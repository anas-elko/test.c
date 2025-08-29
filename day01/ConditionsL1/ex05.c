#include<stdio.h>

int main()
{
    int a,b;

    printf("entre the the anne : ");
    scanf("%d",&a);

    printf("=======================");
    printf("\n=====menu=====\n");
    printf("1. Convertir en Mois\n");
    printf("2.converstir en Jours\n");
    printf("3.converstir en Heures\n");
    printf("4.converstir en Minutes\n");
    printf("5.converstir en Secondes\n");
    printf("========================");
    printf("\nentre b : ");
    scanf("%d",&b);

    switch (b)
    {
    case 1:
        printf("Conversion en Mois : %d", a*12);
        break;
    
    case 2:
        printf("Conversion en Jours : %d", a*365);
        break;
    
    case 3:
        printf("Conversion en Heures : %d", a*365*24);
        break;
    
    case 4:
        printf("Conversion en Minutess : %d", a*365*24*60);
        break;
    
    case 5:
        printf("Conversion en Secondes: %d", a*365*24*3600);
        break;
    }
}