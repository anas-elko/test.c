#include<stdio.h>

int main()
{
    int d,m,y;
    char mm;
    printf("entre the date dd/mm/yy : ");
    scanf("%d/%d/%d",&d,&m,&y);

    switch (m)
    {
    case 1:
        printf("%d/yanayr/%d",d,y);
        break;
    case 2:
        printf("%d/fibrayar/%d",d,y);
        break;
    case 3:
        printf("%d/mars/%d",d,y);
        break;
    case 4:
        printf("%d/april/%d",d,y);
        break;
    case 5:
        printf("%d/may/%d",d,y);
        break;
    case 6:
        printf("%d/yunyo/%d",d,y);
        break;
    case 7:
        printf("%d/youlyoz/%d",d,y);
        break;
    case 8:
        printf("%d/ghesht/%d",d,y);
        break;
    case 9:
        printf("%d/September/%d",d,y);
        break;
    case 10:
        printf("%d/octobr/%d",d,y);
        break;
    case 11:
        printf("%d/November/%d",d,y);
        break;
    case 12:
        printf("%d/December/%d",d,y);
        break;
    
    default:printf("error");
        break;
    }
}