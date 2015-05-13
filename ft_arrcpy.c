/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/13 15:59:37 by ybarbier          #+#    #+#             */
/*   Updated: 2015/03/13 15:59:52 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrcpy(char **arr)
{
	char	**new_arr;
	t_uint	pos;

	if (!(new_arr = (char**)malloc(sizeof(char *) * (ft_arrlen(arr) + 1))))
		return (NULL);
	pos = 0;
	while (arr && arr[pos])
		new_arr[pos] = ft_strdup(arr[pos]), pos++;
	new_arr[pos] = NULL;
	return (new_arr);
}
