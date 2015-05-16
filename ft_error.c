/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 18:49:55 by ybarbier          #+#    #+#             */
/*   Updated: 2015/05/16 12:41:53 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exit(void)
{
	exit(1);
}

void	ft_malloc_error(void)
{
	ft_putstr_fd("malloc error\n", 2);
	ft_exit();
}

void	ft_error_str(char *str)
{
	ft_putstr_fd(str, 2);
}

void	ft_error_str_exit(char *str)
{
	ft_putstr_fd(str, 2);
	ft_exit();
}
