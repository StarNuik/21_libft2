/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 12:21:28 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/21 12:33:11 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_readfile(char *path)
{
	int		fd;
	char	*line;
	char	*res;
	char	*old_res;

	res = ft_strnew(1);
	line = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (get_next_line(fd, &line))
	{
		old_res = res;
		res = ft_strjoin(res, line);
		free(old_res);
		old_res = res;
		res = ft_strjoin(res, "\n");
		free(old_res);
		free(line);
	}
	close(fd);
	return (res);
}
