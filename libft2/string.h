/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:57:21 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:34 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT2_STRING_H
# define LIBFT2_STRING_H

# include "base.h"

typedef struct		s_tring
{
	char			*field;
	size_t			length;
	size_t			mem_size;
}					t_string;

t_string			str_new();
t_string			str_new(const char *array);
void				str_delete(const t_string string);
t_string			str_concat(const t_string left, const t_string right);
t_string			str_insert(const t_string to, const t_string string);
t_string			str_remove(const t_string string, const unsigned int pos, const unsigned int amount);
char				*str_to_c(const t_string string);

#endif
