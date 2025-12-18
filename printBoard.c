#include <stdio.h>
#include <string.h>

int printBoard(char board[8][8][8])
{
    char strings[] = " ";
    printf("Here's the board:\n");
    printf("  ");
    for (int car = 65; car < 73; car++)
    {
        printf("   %c ", car);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("  ");
        for (int j = 0; j < 8; j++)
        {
            printf(" ----");
        }
        printf("\n");
        printf("%d ", i+1);
        for (int k = 0; k < 8; k++)
        {
            strncpy(strings, board[i][k], 2);
            if (strlen(strings) > 1)
            {
                printf("| %s ", strings);
            }
            else
            {
                printf("|    ");
            }
        }
        printf("|\n");
    }
    printf("  ");
    for (int i = 0; i < 8; i++)
    {
        printf(" ----");
    }
    printf("\n");
    return 0;
}
