/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:39:08 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/24 16:49:45 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	ft_putstr("Hello\n");
	ft_putstr("My login is hmaiovsk\n");
	ft_putstr("\n\n\n\n");
	return (0);
}
*/
