#include	<stdio.h>

char	*ft_strcat(char *dest, char *src);
int main()
{
   
	char	arr[] = "Ebrar";
	char	r[] = " agirman";
    
    ft_strcat(arr, r);
    int a;
    
    a = 0;
    while (arr[a])
    {
        printf("%c", arr[a]);
        a++;
    }
    printf("\n");
}
