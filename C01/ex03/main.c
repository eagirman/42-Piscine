#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    
    int e = 10;
    int r =5;
    
	int *d = &e;
	int *m = &r;
    
	ft_div_mod(e, r, d, m);
    printf ("%d , %d", *d , *m);

	return 0;
}

