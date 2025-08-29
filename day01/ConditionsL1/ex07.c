#include<stdio.h>

int main()
{
    char ch;
    printf("entre the character : ");
    scanf("%d",&ch);

    if(ch >= 65 && ch <= 90)
        {
            printf("majuscule");
        }
        else 
        {
            printf(" n'est pas un alphabet majuscule");
        }
}