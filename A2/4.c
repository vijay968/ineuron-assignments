#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two Numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapping no are %d %d",a,b);
    return 0;
}