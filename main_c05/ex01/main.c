/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvitrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:13:16 by juvitrac          #+#    #+#             */
/*   Updated: 2019/06/14 15:32:33 by juvitrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
int		ft_recursive_factorial(int nb);

int		main(void)
{
	ft_putnbr(ft_recursive_factorial(10));
	return (0);
}
