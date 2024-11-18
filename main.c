/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykusano <ykusano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:49:23 by ykusano           #+#    #+#             */
/*   Updated: 2023/02/07 14:46:22 by ykusano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	//size_t	i;

	line = "";
	fd = open("test.txt", O_RDONLY);
	//i = 0;
	//fd = 0;
	while (line)
	{
		line = get_next_line(fd);
		printf("> %s", line);
		free(line);
		//i++;
	}
	return (0);
}
