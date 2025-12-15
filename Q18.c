#include <stdio.h>

int main() 
{
    int arr[100], num, i, j;
    int found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    printf("Enter array elements:\n");
    for(i = 0; i < num; i++) 
{
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements: ");
    for(i = 0; i < num; i++) 
{
        
        int count = 0;

        for(j = 0; j < num; j++) 
{
            if(arr[i] == arr[j]) 
{
                count++;
            }
        }

         if(count > 1) 
{
            
            int Before = 0;
            for(j = 0; j < i; j++) 
{
                if(arr[i] == arr[j]) 
{
                    Before = 1;
                    break;
                }
            }

            if(!Before) 

{
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    if(!found) 
{
        printf("-1");
    }

    return 0;
}
