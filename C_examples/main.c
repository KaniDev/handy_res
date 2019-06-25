#include "headerfile.h"

int	main(void)
{
	char str[] = "yeet\n";
	char str2[] = "zeet\n";
	int i;
	int j;

	i = 0;
	j = 4;
	ft_putchar(ft_strlen(str) + 48);
	ft_putchar('\n');
	ft_putstr(str);
	ft_putchar(ft_strcmp(str, str2) + 48);
	ft_putchar('\n');
	ft_swap(&i, &j);
	ft_putchar(i + 48);
	ft_putchar('\n');
	ft_putchar(j + 48);
	return (0);
}
