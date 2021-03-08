/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __free_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:21:48 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:23:40 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void	__free_element(const size_t index, void *object)
{
	int i = index;

	free(object);
	i++;
}
