#include <stdio.h>

int main() 
{
    int arr[50], size, i, pos, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) 
{
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion: ");
    for(i = 0; i < size; i++) 
{
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Where do you want to insert? (1-Front, 2-Middle, 3-End): ");
    scanf("%d", &pos);

    int insertPos;
    if(pos == 1) 
{           
        insertPos = 0;
    } else if(pos == 2)
{     
        insertPos = size / 2;
    } else 
{                 
        insertPos = size;
    }

    for(i = size; i > insertPos; i--) 
{
        arr[i] = arr[i - 1];
    }

    arr[insertPos] = element;
    size++; 
    printf("Array after insertion: ");
    for(i = 0; i < size; i++)
{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
