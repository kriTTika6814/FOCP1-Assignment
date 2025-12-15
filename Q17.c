#include <stdio.h>

int main()
{
    int arr[50], size, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) 
{
        scanf("%d", &arr[i]);
    }
   
  printf("Array before deletion: ");
  for(i = 0; i < size; i++) 
{
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Where do you want to delete? (1-Start, 2-Middle, 3-End): ");
    scanf("%d", &pos);

    int deletePos;

    if(pos == 1)
{            
        deletePos = 0;
    } else if(pos == 2)
{     
        deletePos = size / 2;
    } else
{                  
        deletePos = size - 1;
    }

   
    for(i = deletePos; i < size - 1; i++) 
{
        arr[i] = arr[i + 1];
    }

    size--;  
    printf("Array after deletion: ");
    for(i = 0; i < size; i++)
{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
