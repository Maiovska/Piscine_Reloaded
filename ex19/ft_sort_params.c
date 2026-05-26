/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:23:18 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/24 16:30:23 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	return ((int)str1[i] - str2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_sort_params(int n, char **params)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 1;
		while (j < n - i)
		{
			if (ft_strcmp(params[j], params[j + 1]) > 0)
				ft_swap(&params[j], &params[j + 1]);
			j++;
		}
		i++;
	}
}
/*

void    ft_putchar(char a)
{
        write(1, &a,1);
}

int     main(int argc, char **argv)
{
	int	i;
	
	ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr( argv [i]);
		i++ ;
	}
	return (0);
}
*/
