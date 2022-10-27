/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:05:28 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/27 17:09:32 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sb;
	size_t	a;

	i = 0;
	a = ft_strlen(s) - start;
	if (len > a)
		len = a;
	if (start >= ft_strlen(s))
		len = 0;
	sb = malloc((len + 1) * sizeof(char));
	if (!sb)
		return (0);
	if (start > ft_strlen(s))
	{
		sb[i] = '\0';
		return (sb);
	}
	while (s[start] != '\0' && i < len)
		sb[i++] = s[start++];
	sb[i] = '\0';
	return (sb);
}
