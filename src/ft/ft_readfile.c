/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:13:00 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/13 14:16:46 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"
#include <stdio.h>

/*
** https://stackoverflow.com/questions/14002954/
*/
char	*ft_readfile(char *path)
{
	FILE 	*f;
	size_t	fsize;
	char	*string;

	f = fopen(path, "rb");
	fseek(f, 0, SEEK_END);
	fsize = ftell(f);
	fseek(f, 0, SEEK_SET);
	string = malloc(fsize + 1);
	fread(string, 1, fsize, f);
	fclose(f);
	string[fsize] = 0;
	return string;
}
