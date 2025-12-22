#include <stdio.h>
#include <string.h>

//Used to retrieve a single char from string, 
//this function will return the ASCII value present at the index 

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

// int main(void)
// {
//     char str[] = "b8 d4";
//     int ind = 4;
//     char ge = get(str, ind);
//     printf("%d\n", ge);
//     return 0;
// }