#include <stdio.h>

int main(){
    int i,n,c;
    printf("Enter the No. :");
    scanf("%d",&n);
    for ( i = 1; n!=0; i++)
    {
      int c=n%10;//yha se jaise hi no use turnt print krdo na ki use store kro gadhe
       printf("%d",c);
       n=n/10;
    }
   
    return 0;
}