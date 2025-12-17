#include <stdio.h>
#include <string.h>


int upperCase(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] = str[i] - 32;
        }
    }
    return 0;
}

//int main(void)
//{    
//    char str[] = "CaDeAu";
//    upperCase(str);
//    printf("%s\n", str);
//    return 0;
//}