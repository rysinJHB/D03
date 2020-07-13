#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}	
int main (void){
	printf("%d\n", ft_strlen("Hello World!\n"));
	return(0);
}
	
