#include	<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
    unsigned int s = 6;

	char	arr[] = "Ebrar";
	char	r[] = "agirman";
   
   ft_strncat(arr, r, s);	
    int a;
    
    a = 0;
    while (arr[a])
    {
        printf("%c", arr[a]);
        a++;
    }
    printf("\n");
}
