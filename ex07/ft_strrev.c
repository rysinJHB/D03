#include <unistd.h>

char	*ft_strrev(char *str)
{
	int index;
	int a;
	int b;
	char temp;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	a = 0;
	b = index - 1;
	while (a < b)
	{
		temp = str[a];
		str[a] = str[b];
		str[b] = temp;
		a++;
		b--;
	}
	return (str);
}
