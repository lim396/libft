/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shongou <shongou@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:11:30 by shongou           #+#    #+#             */
/*   Updated: 2021/11/06 01:11:32 by shongou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*cpy_head;

	cpy_head = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!cpy_head)
		return (NULL);
	ft_strcpy(cpy_head, s1);
	return (cpy_head);
}
