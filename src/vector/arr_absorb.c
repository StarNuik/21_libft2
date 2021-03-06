/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_absorb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:15:08 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:38 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

char		arr_absorb(t_array *arr, long long *ptr, size_t ammount)
{
	if (!arr || !ptr || !ammount)
		return (0);
	while (ammount--)
		if (!arr_push(arr, *ptr++))
			return (0);
	return (1);
}
