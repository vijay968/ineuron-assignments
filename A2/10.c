#include <stdio.h>

int main(){
    int n;
    printf("Enter a no :");
    scanf("%d",&n);
   int c=n%10;
   n=n-c;
   printf("Required no is %d",n);
    return 0;
}