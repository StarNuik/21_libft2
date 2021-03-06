/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:35:57 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/21 12:22:27 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*get_fd(t_list **data, int fd)
{
	t_list	*single;

	single = *data;
	while (single)
	{
		if (single->content_size == (size_t)fd)
			return (single);
		single = single->next;
	}
	single = ft_lstnew("\0", 1);
	if (!single)
		return (NULL);
	single->content_size = fd;
	ft_lstadd(data, single);
	return (single);
}

static int		read_read(int fd, char *buf, t_list *single)
{
	int		ret;
	char	*tmp;

	ret = 1;
	while (ret)
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (!ret)
			break ;
		buf[ret] = '\0';
		tmp = single->content;
		single->content = ft_strjoin(tmp, buf);
		free(tmp);
		if (!single->content)
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (ret);
}

static int		check_last(t_list *single, char **line)
{
	char	*tmp;
	char	*snl;

	tmp = single->content;
	snl = ft_strchr(tmp, '\n');
	if (snl)
	{
		*line = ft_strsub(tmp, 0, snl - tmp);
		single->content = ft_strsub(snl, 1, ft_strlen(snl));
		free(tmp);
		if (!line || !single->content)
			return (-1);
		return (1);
	}
	*line = ft_strdup(single->content);
	if (!*line)
		return (-1);
	free(single->content);
	single->content = ft_memalloc(1);
	if (!single->content)
		return (-1);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static t_list		*data;
	t_list				*single;
	char				buf[BUFF_SIZE + 1];
	int					res;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	single = get_fd(&data, fd);
	*line = "";
	if (!*line)
		return (-1);
	res = read_read(fd, buf, single);
	if (res == -1)
		return (-1);
	if (res < BUFF_SIZE && !ft_strlen(single->content))
		return (0);
	res = check_last(single, line);
	if (res == 1)
		return (1);
	return (-1);
}
