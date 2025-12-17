#include <stdio.h>
#include <string.h>

void getPiece(char *move, char board[8][8][8])
{
    int line;
    int column;

    strcpy(line, move);
    strcpy(column, move);
    line = 0;
    column = 0;
    printf("line : %s, column : %s", line, column);
}