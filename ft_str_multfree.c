/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_multfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/29 12:33:02 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/29 12:33:03 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

void	ft_str_multfree(char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	while (str != NULL)
	{
		free(str);
		str = va_arg(ap, char *);
	}
	va_end(ap);
}
