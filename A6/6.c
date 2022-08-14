#include <stdio.h>

int main(){
    int i,n,fact=1;
    printf("Enter a Number :");
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
        fact=fact*(n-i);
    }
    printf("fcat is %d",fact);
    

    return 0;
}