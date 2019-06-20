/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvitrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 02:02:11 by juvitrac          #+#    #+#             */
/*   Updated: 2019/06/18 07:59:49 by juvitrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(int argc, char **argv)
{
	printf("%i\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
