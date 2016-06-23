#include<stdio.h>

int main()
{
    long long int number,temp;
    scanf("%lld",&number);
    while(number>0)
    {
        temp=number%10;
        number=number/10;
        printf("%d",temp);
    }
    return 0;
}
