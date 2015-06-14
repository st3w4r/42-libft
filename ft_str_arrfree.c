/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_arrfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 18:51:48 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/14 18:56:42 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_arrfree(char **arr_str)
{
	while (arr_str && *arr_str)
	{
		free(*arr_str);
		++arr_str;
	}
}
