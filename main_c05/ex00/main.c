/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvitrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:13:16 by juvitrac          #+#    #+#             */
/*   Updated: 2019/06/14 15:33:54 by juvitrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_iterative_factorial(int nb);

int		main(void)
{
	ft_putnbr(ft_iterative_factorial(7));
	return (0);
}
