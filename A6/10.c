#include <stdio.h>

int main(){
    int i,s=0,u=0,a,b;
    printf("Enter Two Numbers :");
    scanf("%d%d",&a,&b);
    for ( i = 2; i<=a && i<=b; i++)
    {
       while (a%i==0 || b%i==0)
       {
        s=s*i;
        u=u*i;
       }
       
       
    }
    printf("Lcm of a and b is %d",s*u);
    
    return 0;
}