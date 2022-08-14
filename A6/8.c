#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a Number :");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Its not Prime");
            break;
        }

        else
        {
            printf("Its prime");
            break;
        }
    }

    return 0;
}