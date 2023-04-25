#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void rev_str(char *str)
{
    int i;
    int j;
    char **arr;

    i = ft_strlen(str);
    j = 0;
    while (i > 0)
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            j = i + 1;
            while ((str[j] != ' '  && str[j] != '\t' && str[j] != '\0'))
            {
                write(1, &str[j], 1);
                j++;
            }
            write(1, " ", 1);
        }
        i--;
    }
    if (i == 0)
    {
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
        {
            write(1, &str[i], 1);
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_str(argv[1]);
    write(1, "\n", 1);
}
