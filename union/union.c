#include <unistd.h>

int    self_check(char *s, int ind)
{
    int i = 0;
    while (i < ind)
    {
        if (s[i] == s[ind])
            return (1);
        i++;
    }
    return (0);
}

int     previous_check(char *s1, char curr)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] == curr)
            return (1);
        i++;
    }
    return (0);
}

void    my_union(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (self_check(s1, i) == 0)
            write(1, &s1[i], 1);
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if ((previous_check(s1, s2[i]) == 0) && (self_check(s2, i) == 0))
            write(1, &s2[i], 1);
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 3)
    {
        my_union(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return (0);
}
