int split(char *str, char *end, int splitAtN);
int upperCase(char *str);
int get(char *move, int ind);
int check(char *str, int upOrDown);
int printBoard(char board[8][8][8]);
int getInd(char *move, char board[8][8][8], int *line, int *col, int indCol, int indLine);