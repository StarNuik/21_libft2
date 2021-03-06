/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v3euleur.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:44:19 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/18 16:52:43 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	ft_v3euleur(t_vector3 vector,
	double degrees_x, double degrees_y, double degrees_z)
{
	t_ernion	rot;

	rot = ft_queuler(degrees_x, degrees_y, degrees_z);
	vector = ft_v3rotate(vector, rot);
	return (vector);
}
