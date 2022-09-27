void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char dizi[] = "0123456789abcdef";
	//int	nb = -2147483648;
	int nb = 1250;

	ft_putnbr_base(nb, dizi);

	return (0);
}
