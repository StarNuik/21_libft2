/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:05:14 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

t_array		*arr_init(void)
{
	t_array		*res;

	res = (t_array*)malloc(sizeof(t_array));
	if (!res)
		return (NULL);
	res->field = NULL;
	res->mem_size = 0;
	res->length = 0;
	if (!arr_sizeup(res))
	{
		free(res);
		return (NULL);
	}
	return (res);
}
