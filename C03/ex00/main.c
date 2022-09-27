#include	<stdio.h>
int	ft_strcmp(char *s1,char *s2);

int main()
{
	int t;
	char	r[] = "aaaaab";
	char	e[] = "aaaaaa";
	t= ft_strcmp(r, e);
	printf("%d", t);

	return(0);
}

