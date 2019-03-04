#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int *tmp;

    tmp = b;
    b = a;
    a = tmp;
    printf("a : %d\n", a[0]);
    printf("b : %d\n", b[0]);
}

int     main()
{
    int a[] = {1};
    int b[] = {2};
    ft_swap(a, b);
    return (0);
}