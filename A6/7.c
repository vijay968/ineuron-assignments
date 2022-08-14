#include <stdio.h>

int main(){
    int i,n,sum=0;
    printf("Enter a Number :");
    scanf("%d",&n);
    for ( i = 0; n!=0; i++)
    {
        
        n=n/10;

    }
    printf("No of digits is %d",i);
    

    return 0;
}