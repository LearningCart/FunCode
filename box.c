#include <stdio.h>

#define MAX_ROWS (5)
#define MAX_COUMNS  (30)
int main()
{
    int row, column;
    
    for(row = 0; row < MAX_ROWS; row++)
    {
        for(column = 0; column < MAX_COUMNS; column++)
        {
            if(0 == row || (MAX_ROWS-1) == row)
            {
                printf("*");
            }
            else if(0 == column || (MAX_COUMNS - 1) == column)
            {
                printf("*");
            }else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Hello World");

    return 0;
}


