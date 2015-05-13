/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:05:40 by ybarbier          #+#    #+#             */
/*   Updated: 2014/11/14 18:45:22 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# define BUFF_SIZE 1000

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>

# include "libft.h"

int			ft_get_next_line(int const fd, char **line);

#endif
