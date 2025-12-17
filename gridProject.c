#include <stdio.h>
#include <string.h>

int printBoard(char board[8][8][8])
{
    char strings[] = " ";
    printf("Here's the board:\n");
    unsigned char car;
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

void check(char *move, int upOrDown, char board[8][8][8])
{
    if (upOrDown == 0 && move[0] == 87)
    {
        printf("white moves ");
    }
    else if (upOrDown == 1 && move[0] == 66)
    {
        printf("black moves ");
    }
}

int get(char *move, int ind)
{
    int get;
    for (int i = 0; i < strlen(move); i++)
    {
        if (i == ind)
        {
            get = move[i];
        }
    }
    return get;
}

void getPiece(char *move, char board[8][8][8])
{
    int line;
    int column;
    int ind = 4;
    char ge = get(move, ind);

    strcpy(line, move);
    strcpy(column, move);
    line = 0;
    column = 0;
    printf("line : %s, column : %s", line, column);
}

int main(void)
{
    char whiteMove[] = " ";
    char blackMove[] = " ";
    int upOrDown = 0;
    char board[][8][8] = 
    {{"BR1", "BK1", "BB1", "BQ", "BK", "BB1", "BK1", "BR2"},
    {"BP1", "BP2", "BP3", "BP4", "BP5", "BP6", "BP7", "BP8"},
    {"", "", "", "", "", "", "", ""},
    {"", "", "", "", "", "", "", ""},
    {"", "", "", "", "", "", "", ""},
    {"", "", "", "", "", "", "", ""},
    {"WP1", "WP2", "WP3", "WP4", "WP5", "WP6", "WP7", "WP8"},
    {"WR1", "WK1", "WB1", "WQ", "WK", "WB2", "WK2", "WR2"}};
    while (1 == 1)
    {
        printBoard(board);
        if (upOrDown == 0)
        {
            printf("White's turn to play, what is your move ? ");
            scanf("%s", whiteMove);
            getPiece(whiteMove, board);
            //check(whiteMove, upOrDown, board);
        }
        // else
        // {
            // printf("Black's turn to play, what is your move ? ");
            // scanf("%s", blackMove);
        // }
    }

    return 0;
}
