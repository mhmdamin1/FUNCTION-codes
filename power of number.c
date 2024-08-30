// moahmed amin

#include <stdio.h>
#include <stdlib.h>
int the_power(int n,int x){
    if(x!=0)
        return(n*the_power(n,x-1));
    else
    return 1;
}

int main()
{
    int x,n;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter x: ");
    scanf("%d",&x);

    printf("%d^%d = %d",n,x,the_power(n,x));

    return 0;
}
