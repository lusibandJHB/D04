/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:11:04 by lusiband          #+#    #+#             */
/*   Updated: 2020/07/15 11:15:40 by lusiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>


int     ft_iterative_factorial(int nb)
{
	int     z;
	;
	if (nb < 0 ||nb > 5)
	return (0);
	else if (nb<1)
	return (1);
	z=1;
	while (nb >1)
	{
		z*=nb;
		nb--;

	}
	return (z);
 }
