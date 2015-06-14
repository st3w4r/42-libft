/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_arrjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 18:50:33 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/14 18:51:03 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_arrjoin(char **arr_str)
{
	char	*new_str;

	new_str = ft_strdup("");
	while (arr_str && *arr_str != NULL)
	{
		new_str = ft_strjoin_free_l(new_str, *arr_str);
		++arr_str;
	}
	return (new_str);
}
