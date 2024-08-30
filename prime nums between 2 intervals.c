// moahmed amiin

#include <stdio.h>
#include <stdlib.h>

int found_primenum(int n){
    int j,flag=0;
    for(j=0;j<=n/2;j++){
        if(n%j==0){
            flag=1;
            break;
        }
    }
return flag;

}
int main()
{
    int n1,n2,i,flag=0;
    printf("enter two nums(intervals): ");
    scanf("%d %d ",&n1,&n2);

    printf("prime nums between %d and %d are: ",n1,n2);
    for(i=n1+1;i<n2;++i){
        if(flag==0)
            printf("(%d) ",i);

    }
    return 0;
}
