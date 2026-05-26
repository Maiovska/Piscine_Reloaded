/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 10:15:35 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/20 15:25:18 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include<stdio.h>

int	main(void)
{
	int a = 21;
	int b = 6;
	int div = 0;
	int mod = 0;

	ft_div_mod(a,b, &div, &mod);

	printf("%d / %d = %d, %d %% %d = %d\n", a, b, div, a, b, mod);
}
*/
