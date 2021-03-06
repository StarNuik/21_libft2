/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_find_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 07:37:06 by sbosmer           #+#    #+#             */
/*   Updated: 2019/08/10 17:37:56 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	arr_find_destroy(t_array *arr, long long target)
{
	const size_t	id = arr_find(arr, target);

	if (id == (size_t)-1)
		return (0);
	return (arr_drop(arr, id));
}
