/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 11:13:50 by ybarbier          #+#    #+#             */
/*   Updated: 2015/03/17 11:13:54 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace_char(char const *s, char c_s, char c_r)
{
	char	*str;
	int		i;

	str = (char*)s;
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c_s)
			str[i] = c_r;
		++i;
	}
	return (str);
}
