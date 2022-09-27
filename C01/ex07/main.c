#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)

	printf("%d, ", arr[i]);
    
	printf("%d\n", arr[size - 1]);
}
int		main (void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size;
	
	size = 5;

	
	ft_rev_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
