#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
    if(n==1)
        return 1;
        if(n>1)
            return factorial(n-1)*n;
}
int main()
{
    int value,result;
    scanf("%d",&value);
    result=factorial(value);
    printf("%d",result);
}
