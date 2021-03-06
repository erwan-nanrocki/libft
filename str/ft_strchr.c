/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:33:48 by enanrock          #+#    #+#             */
/*   Updated: 2017/11/03 13:36:10 by enanrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while ((s[i] != (char)c) && (s[i] != '\0'))
		i++;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	else
		return (NULL);
}
