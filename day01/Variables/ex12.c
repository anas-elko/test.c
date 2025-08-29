#include<stdio.h>

int main()
{
    int a,b,c,d;
    int n,m;
    printf("entre n : ");
    scanf("%d",&n);
  

     a = n / 1000;
     b =  (n / 100) % 10;
     c = (n / 10) % 10;
     d = n % 10;
    
    m = d * 1000 + c * 100 + b * 10 + a;
    
     printf("%d",m);


}