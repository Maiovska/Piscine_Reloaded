/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:53:09 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/24 15:52:28 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	length = max - min;
	range = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		range [i] = min;
		i++;
		min++;
	}
	return (range);
}

/*
#include <stdio.h>

int	main(void)
{
	int *range = ft_range (-2, 10);
	for (int i = 0; i < 12; i++)
		printf("%i", range[i]);
	printf("\n");
}
*/
