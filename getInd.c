#include <stdio.h>
#include <string.h>
#include "myLib.h"

//This function will return the indexes of a piece from the board 

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

int getInd(char *move, char board[8][8][8], int *line, int *col, int indCol, int indLine)
{
    unsigned char tmpLine;
    unsigned char tmpCol;
    tmpLine = get(move, indLine);
    tmpCol = get(move, indCol);
    *line = (int) tmpLine - 49;
    *col = (int) tmpCol - 97;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == *line && j == *col)
            {
                break;
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
    {"WR1", "WK1", "WB1", "WQ", "WK", "WB2", "WK2", "WR2"}};
    int oriLine, oriCol;
    int destLine, destCol;
    char move[] = "c8 a5";
    getInd(move, board, &oriLine, &oriCol, 0, 1);
    getInd(move, board, &destLine, &destCol, 3, 4);
    printf("%d, %d: %s\n", oriLine, oriCol, board[oriLine][oriCol]);
    printf("%d, %d: %s\n", destLine, destCol, board[destLine][destCol]);
    return 0;
}