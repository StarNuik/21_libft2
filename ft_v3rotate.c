/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v3rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:41:59 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/18 16:43:58 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	ft_v3rotate(t_vector3 vector, t_ernion rotation)
{
	vector = ft_m4xv3(ft_qurotmatrix(rotation), vector);
	return (vector);
}
