/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 14:52:10 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/20 15:25:02 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_power(int num)
{
	unsigned int	temp;

	temp = ((num < 0) ? -(num) : (num));
	if (temp > 65535)
		return (0);
	return (temp * temp);
}
