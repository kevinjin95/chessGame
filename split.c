#include <stdio.h>
#include <string.h>
//#include <ctype.h>

int split(char *str, char *end, int splitAtN)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (i >= splitAtN)
        {
            str[i] = 32;
        }
        if (i <= splitAtN)
        {
            end[i] = 32;
        }
    }
    return 0;
}

//int main(void)
//{    
//    char str[] = "b8 d4";
//    char end[] = "     ";
//    strcpy(end, str);
//    split(str, end, 2);
//    printf("start : %s, end : %s\n", str, end);
//    return 0;
//}