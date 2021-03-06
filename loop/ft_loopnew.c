/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loopnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 13:41:21 by enanrock          #+#    #+#             */
/*   Updated: 2017/11/03 13:26:54 by enanrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_loop	*ft_loopnew(void const *content, size_t content_size)
{
	t_loop	*result;

	result = (t_loop *)ft_memalloc(sizeof(t_loop));
	if (result == NULL)
		return (NULL);
	if (content == NULL)
	{
		result->content = NULL;
		result->content_size = 0;
	}
	else
	{
		result->content = (void *)ft_memalloc(content_size);
		if (result->content == NULL)
			result->content_size = 0;
		else
		{
			ft_memmove(result->content, content, content_size);
			result->content_size = content_size;
		}
	}
	result->down = result;
	result->up = result;
	return (result);
}
