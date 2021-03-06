/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powerl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 15:03:54 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/20 15:30:42 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_powerl(long num)
{
	unsigned long	temp;

	temp = ((num < 0) ? -(num) : (num));
	if (temp > UI_MAX + 1)
		return (0);
	return (temp * temp);
}
