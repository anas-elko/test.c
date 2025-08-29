#include<stdio.h>

int main()
{
    char ch;
    printf("entre the ch : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        printf("C'est une voyelle\n");
        break;
        default :
        printf("erour");
       
    }
    return 0;
}