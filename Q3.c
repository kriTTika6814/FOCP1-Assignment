#include <stdio.h>

int add(int num1, int num2) 
{
    while (num2 != 0) 
{
        int carry = num1 & num2;
        num1 = num1 ^ num2;
        num2 = carry << 1;
    }
    return num1;
}

int subtract(int num1, int num2) 
{
    return add(num1, add(~num2, 1));
}

int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);
    printf( "%d",result);

    return 0;
}

