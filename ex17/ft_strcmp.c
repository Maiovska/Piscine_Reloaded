/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:53:26 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/24 16:01:23 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putnbr(nb + 48);
	else
	{
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	char *str1 = "abcd";
	char *str2 = "abcd";
	int result;

	result = ft_strcmp(str1, str2);

	printf("%d\n", result);
	return (0);
}
*/
