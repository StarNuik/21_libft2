/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:22:58 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/02 21:33:45 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_clamp(long long value, long long min, long long max)
{
	if (value < min)
		return (min);
	if (value > max)
		return (max);
	return (value);
}
