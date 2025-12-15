#include <stdio.h>

int main() 
{
    int arr[50], num, i, last;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("Enter the array elements:\n");
    for(i = 0; i < num; i++) 
{
        scanf("%d", &arr[i]);
    }

   last = arr[num - 1];
   for(i = num - 1; i > 0; i--) 
{
        arr[i] = arr[i - 1];
    }

   arr[0] = last;
   printf("\nArray after clockwise rotation:\n");
    for(i = 0; i < num; i++) 
{
        printf("%d ", arr[i]);
    }

    return 0;
}
