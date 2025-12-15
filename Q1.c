#include <stdio.h>
int main() {
    int num, num2, rem, n = 0;
    int result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Negative numbers are not armstrong numbers\n");
        return 0;
    }

    if (num == 0) 
    {
        printf("0 is an armstrong number\n");
        return 0;
    }

    num2 = num;

    while (num2 != 0) 
    {
        num2 /= 10;
        ++n;
    }

    num2 = num;

    while (num2 != 0) 
    {
        rem = num2 % 10;

        int power = 1;
        for (int i = 0; i < n; i++) 
        {
            power=power*rem;
        }

        result=result+power;
        num2=num2/ 10;
    }

    if (result == num)
        printf("%d is an armstrong number\n", num);
    else
        printf("%d is not an armstrong number\n", num);

    return 0;
}
