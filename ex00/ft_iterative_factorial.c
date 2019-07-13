/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:23:46 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/13 16:57:05 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int answer;
	int i;

	answer = 1;
	i = nb;
	while (i > 1)
	{
		answer = answer * i;
		--i;
	}
	if (nb < 0)
		return (0);
	return (answer);
}
