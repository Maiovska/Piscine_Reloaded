/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:56:27 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/20 15:00:19 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include<stdio.h>
int	main(void)
{
	int a = 21;
	int b = 42;
	printf("Before: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: a = %d, b = %d\n", a, b);
	return (0);
}
*/
