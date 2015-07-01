/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/01 18:32:48 by ybarbier          #+#    #+#             */
/*   Updated: 2015/07/01 18:36:39 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str_count_char(char *str, char c)
{
	size_t i;

	i = 0;
	while (str && *str)
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i);
}
