#include <stdio.h>
#include <unistd.h>

void repeat_alpha(char *str)
{
    int repeat;

    while (*str)
    {
        write(1, str, 1);
        if (*str - 97 > 0 && *str >= 'a' && *str <= 'z')
        {
            repeat = *str - 97;
            while (repeat)
            {
                write(1, str, 1);
                repeat--;
            }
        }
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
        repeat_alpha(argv[1]);
        write(1, "\n", 1);
        return (0);
    }
}
