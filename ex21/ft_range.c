/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 21:14:37 by mabarros          #+#    #+#             */
/*   Updated: 2025/04/05 21:46:44 by mabarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	if (min >= max)
		return (NULL);
	size = max - min;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	int	x, max, min, size;
	int	*i;
	
	max = 1000000;
	min = -1000000;
	size = max - min;
	x = 0;
	i = ft_range(min, max);
	while (x < size)
	{
		printf("%d\n", i[x++]);
	}
	free(i);
	return (0);
}*/
