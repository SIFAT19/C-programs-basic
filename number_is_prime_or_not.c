#include <stdio.h>

int main() {
    int a;
    printf("Enter your number:");
    scanf("%d", &a);
    while ((a % 2 != 0) && (a % 3 != 0) &&(a%5!=0)&&(a%7!=0)&&(a%9!=0)||(a%11!=0))
    {
        printf("It is a prime number \n");
        break;

    }
    if ((a % 2 == 0) || (a % 3 == 0)||(a%5==0)||(a%7==0)||(a%9==0)||(a%11==0))
    {
        printf("It is not prime number");
    }

    return 0;
}