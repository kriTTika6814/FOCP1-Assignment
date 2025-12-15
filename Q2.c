#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) 
{
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("HCF = %d\n", num1);

    return 0;
}
