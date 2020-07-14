/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:26:26 by rysin             #+#    #+#             */
/*   Updated: 2020/07/14 10:44:14 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr){
	*nbr = 42;
	}
void 	ft_putnbr(int *nbr)
{
}
int main (void)
{
	int a;
	int *ptr;

	a =42;
	ptr = &a;

		ft_ft(ptr);
		ft_putnbr(ptr);
		return(0);
}
