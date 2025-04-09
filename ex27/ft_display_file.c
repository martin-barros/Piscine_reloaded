/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:25:46 by mabarros          #+#    #+#             */
/*   Updated: 2025/04/09 19:12:32 by mabarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	char	c;
	int		fd;

	if (argc > 2 || argc == 1)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		else if (argc == 1)
			write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	return (0);
}
