/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:20:29 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:16 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT2_VECTOR_H
# define LIBFT2_VECTOR_H

# include "base.h"

typedef struct		s_vector
{
	void			*field;
	size_t			length;
	size_t			mem_size;
}					t_vector;

t_vector			*vector_new(void);
t_bool				vector_sizeup(const t_vector *vector);
t_bool				vector_push(const t_vector *vector, void *num);
t_bool				vector_unshift(const t_vector *vector, void *num);
t_bool				vector_set(const t_vector *vector, size_t index, void *value);
size_t				vector_length(const t_vector *vector);
void				*vector_pop(const t_vector *vector);
void				*vector_shift(const t_vector *vector);
t_bool				vector_contains(const t_vector *vector, void *val);
void				*vector_get(const t_vector *vector, size_t index);
void				*vector_top(const t_vector *vector);
void				*vector_last(const t_vector *vector);
void				vector_iter(const t_vector *vector, void (*f)(size_t, void *));
void				vector_iterv(const t_vector *vector, void *user_data, void (*f)(size_t, void *, void *));
void				vector_itervv(const t_vector *arr, void *user_data1, void *user_data2, void (*f)(size_t, void *, void *, void *));
void				*vector_drop(const t_vector *vector, size_t index);
size_t				vector_find(const t_vector *vector, void *target);
void				*vector_find_destroy(const t_vector *arr, void *target);
t_bool				vector_absorb(const t_vector *vector, void **source, size_t ammount);
t_bool				vector_rabsorb(const t_vector *vector, void **source, size_t ammount);
t_bool				vector_topsorb(const t_vector *vector, void **source, size_t ammount);
t_bool				vector_rtopsorb(const t_vector *vector, void **source, size_t ammount);
t_vector			*vector_start(void **source, size_t ammount);
void				vector_clear(const t_vector *arr);
void				vector_delete(const t_vector *vector);

#endif