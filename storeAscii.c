#include <stdio.h>

int displayChar(void)
{    
    unsigned char car;
    for (car = 65; car < 73; car++)
    {
        printf("  %c  ", car);
    }
    printf("\n");
    return 0;
}

int storeAscii(char board[][8][8])
{    
    unsigned char line = 54;
    unsigned char column = 65-17;
    int line2 = (int) line - 48;
    int column2 = (int) column - 48;
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (i == line2 && j == column2)
            {
                printf("%s\n", board[i][j]);
            }
        }
    }
    return 0;
}

int main(void)
{   
    char board[][8][8] =
        {{"BR1", "BK1", "BB1", "BQ", "BK", "BB1", "BK1", "BR2"},
        {"BP1", "BP2", "BP3", "BP4", "BP5", "BP6", "BP7", "BP8"},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"WP1", "WP2", "WP3", "WP4", "WP5", "WP6", "WP7", "WP8"},
        {"WR1", "WK1", "WB1", "WQ", "WK", "WB2", "WK2", "WR2"}
    };
    // displayChar();
    storeAscii(board);
    // unsigned char digit;
    // printf("between 0 and 127: ");
    // scanf("%c\n", &digit);
    // printf("%c\n", digit);
    // unsigned char line = 49;
    // int num = (int)line;
    // unsigned char num2 = num + line;
    // if (line == num)
    // {
    //     printf("ok");
    // }
    // printf("%c\n", line);
    // printf("%d\n", num);
    // printf("%c\n", num2);
    return 0;
}
