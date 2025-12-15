 #include <stdio.h>

void swapWithTemp(int a, int b);

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal values: num1= %d, num2 = %d\n", num1, num2);

int temp;
     temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap:  num1 = %d, num2 = %d\n", num1, num2);
}
