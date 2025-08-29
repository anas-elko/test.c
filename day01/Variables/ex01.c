#include<stdio.h>
int main()
{
    char name[100];
    char prenom[100];
    int age;
    char mail[100];

    printf("entre your nom : ");
    scanf("%s",name);

    printf("entre your prenom : ");
    scanf("%s",prenom);

    printf("entre your age : ");
    scanf("%d",&age);

    printf("entre your mail : ");
    scanf("%s",mail);

    printf("**************your info*****************");

    printf("your nom : %s",name);
    printf("your nom : %s",prenom);
    printf("your nom : %d",age);
    printf("your nom : %s",mail);
}