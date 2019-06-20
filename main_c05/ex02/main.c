/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvitrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 02:02:11 by juvitrac          #+#    #+#             */
/*   Updated: 2019/06/18 07:52:20 by juvitrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(int argc, char **argv)
{
	printf("%i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
