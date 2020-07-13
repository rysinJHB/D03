/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:34:08 by rysin             #+#    #+#             */
/*   Updated: 2020/07/13 12:44:20 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

int main()
{
	char str[50] = "geeksforgeeks";
	printf("The given string is =%s\n",str);
	printf("After reversing string is =%s",ft_strrev(str));
	return(0);
}
