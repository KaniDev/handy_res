/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvitrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:06:11 by juvitrac          #+#    #+#             */
/*   Updated: 2019/06/18 09:09:08 by juvitrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(int ac, char **av)
{
	printf("%i\n", ft_is_prime(atoi(av[1])));
	return (0);
}
