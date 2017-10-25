/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhalit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 10:46:59 by bbeldame          #+#    #+#             */
/*   Updated: 2017/09/30 10:47:00 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*semalloc(size_t size)
{
	void *new;

	if (!(new = malloc(size)))
		err_found("malloc failed");
	return (new);
}
