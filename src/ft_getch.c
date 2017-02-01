/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelaby <hdelaby@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 08:48:00 by hdelaby           #+#    #+#             */
/*   Updated: 2017/02/01 10:10:22 by hdelaby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <curses.h>

/*
** This function reads 3 bytes at a time when the terms is in canonical mode
** Man getch can be really interesting for that.
*/

int		ft_getch(void)
{
	char	buf[3];
	read(0, buf, 3);
	if (buf[0] == 27)
	{
		if (buf[2] == 67)
			return (KEY_RIGHT);
		if (buf[2] == 68)
			return (KEY_LEFT);
	}
	return (buf[0]);
}