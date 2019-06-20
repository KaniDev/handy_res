/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvitrac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 20:39:54 by juvitrac          #+#    #+#             */
/*   Updated: 2019/06/11 11:34:05 by juvitrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int yeehaw;

	yeehaw = 0;
	while (str[yeehaw] != '\0')
	{
		ft_putchar(str[yeehaw]);
		yeehaw++;
	}
}
