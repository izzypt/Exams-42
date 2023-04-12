#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int     *ft_range(int start, int end)
{
    int arraysize;
    int *array;
    int i;

    i = 0;
    arraysize = end - start;
    if (arraysize < 0)
        arraysize *= -1;
    arraysize += 1;
    
    array = malloc(sizeof(int) * arraysize);
    //printf("%d\n", arraysize);
    if (end > start)
    {
        while (start <= end)
        {
            array[i] = start;
            //printf("[%d]", array[i]);
            start++;
            i++;
        }
    }
    else if (end < start)
    {
        while (start >= end)
        {
            array[i] = start;
            //printf("[%d]", array[i]);
            start--;
            i++;
        }
    }
    else
    {
        array[i] = start;
        //printf("[%d]", array[i]);
    }
    //printf("\n");
    return (array);
}

/*int main(int argc, char **argv)
{
    ft_range(3,8);
    write(1, "\n", 1);
    ft_range(1,3);
    write(1, "\n", 1);
    ft_range(-1,2);
    write(1, "\n", 1);
    ft_range(0,0);
    write(1, "\n", 1);
    ft_range(0,-3);
    write(1, "\n", 1);
}*/
