// moahmed amin

#include <stdio.h>
#include <stdlib.h>


int factorial(int n){

    if(n!=1)
        return n*factorial(n-1);
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d ",&n);

    printf("factorial of %d = %ld",n, factorial(n));
    return 0;
}
