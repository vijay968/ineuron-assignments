#include <stdio.h>

int main(){
    int i,n;
    printf("Enter the Number :");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        printf("  %d",n*i);

    }
    
    return 0;
}