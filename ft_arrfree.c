/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 20:09:03 by ybarbier          #+#    #+#             */
/*   Updated: 2015/01/28 20:09:05 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_arrfree(char ***arr)
{
	int i;

	i = 0;
	while ((*arr)[i])
		free((*arr)[i++]);
	free((*arr)[i]);
	free(*arr);
	*arr = NULL;
}
