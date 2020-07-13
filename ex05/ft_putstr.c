/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:14:56 by rysin             #+#    #+#             */
/*   Updated: 2020/07/13 13:15:40 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}
int main(void) {
	ft_putstr("Duck Tales");
	return 0;
}
