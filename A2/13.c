#include <stdio.h>

int main(){
    int n,a;
    printf("Enter a no and a digit:");
    scanf("%d%d",&n,&a);
    n=n*10;
    n=n+a;
    printf("%d",n);
    return 0;
}