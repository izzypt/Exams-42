#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void invert_alphabet(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = 97 + (122 - *str);
            write(1, str, 1);
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = 65 + (90 - *str);
            write(1, str, 1);
        }
        else
            write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        invert_alphabet(argv[1]);
        write(1, "\n", 1);
        return (0);
    }
}
