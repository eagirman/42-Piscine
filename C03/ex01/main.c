#include	<stdio.h>
int	ft_strncmp(char *s1,char *s2, unsigned int n);

int main()
{
	unsigned int s;
	int t;
	
    s = 5 ;
	char	r[] = "ebrar";
	char	e[] = "edhhkdfk";
	t= ft_strncmp(r, e, s);
	printf("%d", t);

	return(0);
}
