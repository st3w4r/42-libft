/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_multjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/29 12:33:10 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/29 12:33:11 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

char	*ft_str_multjoin(char *str, ...)
{
	va_list	ap;
	char	*new_str;

	new_str = ft_strdup("");
	va_start(ap, str);
	while (str != NULL)
	{
		new_str = ft_strjoin_free_l(new_str, str);
		str = va_arg(ap, char *);
	}
	va_end(ap);
	return (new_str);
}
