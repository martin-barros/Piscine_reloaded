/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:53:34 by mabarros          #+#    #+#             */
/*   Updated: 2025/04/05 21:10:34 by mabarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) && (s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	char	*cup3;
	int		i;
	int		x;

	i = 0;
	while (++i < argc - 1)
	{
		x = i + 1;
		while (x < argc)
		{
			if (ft_strcmp(argv[i], argv[x]) > 0)
			{
				cup3 = argv[i];
				argv[i] = argv[x];
				argv[x] = cup3;
			}
			x++;
		}
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
