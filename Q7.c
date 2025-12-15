#include <stdio.h>

int main()
{
    int n = 5, i, j;
    int num;  
    for (i = 1; i <= n; i++)
    {
      num = 0;  
      for (j = 1; j <= i; j++)
        {
            printf("%d", num);
            num = 1 - num;  
        }

        printf(" ");  
        num = 0;  
        for (j = 1; j <= i; j++)
        {
            printf("%d", num);
            num = 1 - num;
        }

        printf("\n");  
    }

    return 0;
}
