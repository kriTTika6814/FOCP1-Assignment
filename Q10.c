#include <stdio.h>

int main() 
{
    int marks[50], num, i, count = 0;

    printf("Enter the number of students: ");
    scanf("%d", &num);
    printf("Enter the marks of students:\n");
    for(i = 0; i < num; i++)
{
        scanf("%d", &marks[i]);
    }
    printf("\nStudents who scored 99:\n");
    
    for(i = 0; i < num; i++) 
{
        if(marks[i] == 99) 
    {
            printf("at Position: %d\n", i + 1);
            count++;
        }
    }

    printf("\nTotal number of students who scored 99: %d\n", count);

    return 0;
}
