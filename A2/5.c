#include <stdio.h>

int main(){
    int i ,n,sum=0;
    printf("Enter a no :");
    scanf("%d",&n);
    while (n!=0)
    {
      int c=n%10;
      sum=sum+c;
      n=n/10;
    }
    printf("sum of didgits is %d",sum);
    
   
    return 0;
}