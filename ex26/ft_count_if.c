/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:37:30 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/24 16:32:07 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i] == 1))
			counter++;
		i++;
	}
	return (counter);
}
