#include <stdio.h>

int main() 
{
    int n, num1 = 0, num2 = 1, next, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++)
{
        if(i == 1) 
{
            printf("%d ", num1);
            continue;
        }
        if(i == 2) 
{
            printf("%d ", num2);
            continue;
        }

        next = num1 + num2;
        printf("%d ", next);
        num1 = num2;
        num2 = next;
    }

    return 0;
}
