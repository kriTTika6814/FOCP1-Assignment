#include <stdio.h>

int main() 
{
    int arr[50], num, i, j, count = 0, Prime;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("Enter the array elements:\n");
    for(i = 0; i < num; i++) 
{
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < num; i++) 
{
        if(arr[i] < 2) 
{
            continue;  
        }

        Prime = 1;  
      for(j = 2; j * j <= arr[i]; j++) 
{  
            if(arr[i] % j == 0) 
{
                Prime = 0;
                break;
            }
        }

        if(Prime) 
{
            count++;
        }
    }

    printf("\nTotal prime numbers in the array: %d\n", count);

    return 0;}
