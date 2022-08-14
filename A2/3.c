#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two Numbers :");
    scanf("%d%d",&a,&b);
    int c=a+b;
    a=c-a;
    b=c-b;
    printf("Swapping no are %d %d",a,b);
    return 0;
}