/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clampd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:31:59 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/05 13:56:36 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double		ft_clampd(double value, double min, double max)
{
	if (value <= min)
		return (min);
	if (value >= max)
		return (max);
	return (value);
}
