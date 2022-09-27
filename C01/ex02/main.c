#include <stdio.h>
void    ft_swap(int *a, int *b);

int main()
{
    int e = 7;
    int r = 8;
    
    int *d = &e;
    int *f = &r;
    
    ft_swap (d, f);
    
    printf("%d %d" , *d, *f);
    return 0;
}
