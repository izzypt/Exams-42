#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;

    while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        res *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}

int put_hex(int number)
{
    if (number > 16)
        put_hex(number / 16);
    write(1, &"0123456789abcdef"[number % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        //printf("%d", ft_atoi(argv[1]));
        put_hex(ft_atoi(argv[1]));
    }
    write(1, "\n", 1);
}
