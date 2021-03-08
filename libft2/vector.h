/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:20:29 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:13:41 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT2_VECTOR_H
# define LIBFT2_VECTOR_H

# include "base.h"

# define START_LENGTH (4)
# define SIZEOF (sizeof(void *))

typedef struct		s_vector
{
	void			**memory;
	size_t			length;
	size_t			mem_size;
}					t_vector;

//* new
t_vector			*vector_new(void);
t_vector			*vector_from_array(const void *source, const size_t length);
t_bool				vector_reserve(t_vector *vector, const size_t length);
t_bool				vector_expand(t_vector *vector);

//* Create
t_bool				vector_push_back(t_vector *vector, const void *object);
t_bool				vector_push_front(t_vector *vector, const void *object);
t_bool				vector_insert(t_vector *vector, const void *object, const size_t index);

//* Read
void				*vector_top(t_vector *vector);
void				*vector_last(t_vector *vector);
void				*vector_at(t_vector *vector, const size_t index);

t_bool				vector_is_full(t_vector *vector);
t_bool				vector_is_empty(t_vector *vector);

size_t				vector_find(t_vector *vector, const void *object);
t_bool				vector_contains(t_vector *vector, const void *val);

void				vector_foreach(t_vector *vector, void (*f)(size_t, void *));
void				vector_foreach_ptr(t_vector *vector, void *ptr, void (*f)(size_t, void *, void *));

//* Update
void				*vector_set(t_vector *vector, const size_t index, const void *object);

//* Delete
void				*vector_pop(t_vector *vector);
void				*vector_shift(t_vector *vector);
t_bool				vector_remove(t_vector *vector, const void *object);
t_bool				vector_remove_free(t_vector *vector, const void *object);
void				*vector_remove_at(t_vector *vector, const size_t index);
void				vector_remove_at_free(t_vector *vector, const size_t index);

//* delete
t_bool				vector_shrink_to_fit(t_vector *vector);
void				vector_clear(t_vector *vector);
void				vector_clear_free(t_vector *vector);
void				*vector_delete(t_vector *vector);
void				*vector_delete_free(t_vector *vector);

void				__free_element(const size_t index, const void *object);

#endif