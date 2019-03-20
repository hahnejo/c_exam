#include <unistd.h>

int     master_iter(char *s1, char *s2)
{
    int i;
    int j;
    int count;

    count = 0;
    i = 0;
    j = 0;
    while (s1[i])
    {
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                count++;
                break ;
            }
            j++;
        }
        i++;
    }
    return (count);
}

void    eligible_test(char *s1, int count)
{
    int i = 0;
    while (s1[i])
        i++;
    if (count == i)
    {
        i = -1;
        while (s1[++i])
            write(1, &s1[i], 1);
    }
}

int     main(int argc, char **argv)
{
    int count;
    if (argc == 3)
    {
        count = master_iter(argv[1], argv[2]);
        eligible_test(argv[1], count);
    }
    write(1, "\n", 1);
    return (0);
}