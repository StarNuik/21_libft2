/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:16:19 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

t_array		*arr_start(long long *ptr, size_t ammount)
{
	t_array		*arr;

	arr = arr_init();
	if (!arr)
		return (NULL);
	if (!arr_absorb(arr, ptr, ammount))
	{
		arr_destroy(arr);
		return (NULL);
	}
	return (arr);
}
