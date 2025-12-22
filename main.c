#include <stdio.h>
#include <string.h>
#include "myLib.h"

int main(void)
{
    char move[] = " ";
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
            scanf("%s", move);
            int oriLine, oriCol;
            int destLine, destCol;
            getInd(move, board, &oriLine, &oriCol, 0, 1);
            getInd(move, board, &destLine, &destCol, 3, 4);
            printf("piece : %s\n", board[oriLine][oriCol]);
            printf("target : %d, %d\n", destLine, destCol);
            //movePiece();
            strcpy(board[destLine][destCol], board[oriLine][oriCol]);
        }
        else
        {
            printf("Black's turn to play, what is your move ? ");
            scanf("%s", move);
        }
    }
    return 0;
}
