/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:37:41 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/20 23:37:43 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*read_input(void)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * 200);
	read(0, buffer, 1);
	return (buffer);
}

int		has_a_file(char *path)
{
	int file;

	if ((file = open(path, O_RDONLY)) < 0)
		return (0);
	return (1);
}

int		size_of_file(char *path)
{
	int		count;
	char	*buff;
	int		file;

	count = 0;
	buff = malloc(sizeof(char));
	file = open(path, O_RDONLY);
	while (read(file, buff, sizeof(char)))
		count++;
	close(file);
	free(buff);
	return (count);
}


}
