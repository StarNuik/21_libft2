/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v3divnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:30:39 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/17 22:31:03 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	ft_v3divnum(t_vector3 a, double b)
{
	t_vector3	res;

	res.x = a.x / b;
	res.y = a.y / b;
	res.z = a.z / b;
	return (res);
}
