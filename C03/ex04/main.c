#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "Ebrar";
	char to_find[] = "r";

		printf("%s\n", ft_strstr(str, to_find));

	return (0);
}

