#include<stdio.h>

int main()
{
    char ch;
    printf("entre the ch : ");
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        if(ch >= 65 && ch <= 90)
        {
            printf("majuscule");
        }
        else
        {
            printf("minuscule");
        }
    }
    else{
        printf("error");
    }
}