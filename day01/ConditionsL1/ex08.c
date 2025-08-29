#include<stdio.c>

int main()
{
    float s;

    printf("entre the s : ");
    scanf("%f",&s);


    if(s < 10)
    {
        printf("recale");
    }
    else if(s >= 10 && s < 12)
    {
        printf("mention passable");
    }
    else if(s >= 12 && s < 14)
    {
        printf("mention assez bien");
    }
    else if(s >= 14 && s < 16)
    {
        printf("il obtient la mention bien.");
    }
    else 
    {
        printf("il obtient la mention très bien");
    }
}