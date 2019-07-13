/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:23:46 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/13 16:27:03 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_iterative_factorial(nb - 1));
}
