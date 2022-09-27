#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	char dizi[] ="  ---+- -+1234ab567";

	printf("%d\n", ft_atoi(dizi));
	return (0);
}
