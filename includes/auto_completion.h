/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_completion.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelaby <hdelaby@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 11:55:54 by hdelaby           #+#    #+#             */
/*   Updated: 2017/02/02 13:32:11 by hdelaby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUTO_COMPLETION_H
# define AUTO_COMPLETION_H

# include "libft.h"
# include "ft_printf.h"
# include "line_editing.h"
# include <dirent.h>

int		auto_complete(t_dlist **lst);

#endif