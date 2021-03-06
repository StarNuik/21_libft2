/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 03:12:58 by sbosmer           #+#    #+#             */
/*   Updated: 2019/08/10 17:37:45 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	arr_clear(t_array *arr)
{
	if (!arr || arr->length == 0)
		return ;
	ft_bzero(arr->field, arr->length * sizeof(long long));
	arr->length = 0;
}
