/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:59:53 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 17:05:54 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	char	*s;

	if (!hay || !nee)
		return (NULL);
	s = ft_strstr(hay, nee);
	if (s > hay + len - ft_strlen(nee))
		return (NULL);
	return (s);
}
