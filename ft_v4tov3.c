/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v4tov3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:31:32 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/18 16:32:55 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3		ft_v4tov3(t_vector4 a)
{
	t_vector3	res;

	res.x = a.x;
	res.y = a.y;
	res.z = a.z;
	return (res);
}
