#include <stdio.h>

int	ft_strlen(char *str);

int		main(void)
{
	char str[] = "eren";

	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return 0;
}
