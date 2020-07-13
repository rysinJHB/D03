/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:44:25 by rysin             #+#    #+#             */
/*   Updated: 2020/07/13 13:56:55 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 #include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0 && div && mod)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main()
{
  int a = 41;
  int b = 11;
  int *div;
  int *mod;

  ft_div_mod(a, b, div, mod);

  printf("%d\n", *div);
  printf("%d\n", *mod);

  return(0);
}
