// mohamed amin

#include <stdio.h>
#include <stdlib.h>

int reverse(char sen){

    scanf("%c",&sen);
    if(sen != '\n'){
        reverse(sen);
        printf("%c",sen);
    }
}
int main()
{
    char sen;
    printf("enter a sentance: ");
    reverse(sen);
    return 0;
}
