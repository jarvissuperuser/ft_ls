/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 13:14:15 by tmugadza          #+#    #+#             */
/*   Updated: 2016/06/19 16:53:19 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "ft_ls.h"

char	*getlist(void)
{
	return ("");
}

int		cs(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int		cd(char c)
{
	if (c == '-')
		return (1);
	return (0);
}

int		flag_translate(char *s, t_n t)
{
	int a;
	
	a = 0;
	if (s[0] == '-') 
	{
		while (a < ft_strlen(s))
		{
			if (s[1] == 'a')
				t.d |= 2;
			if (s[1] == 'R')
				t.d |= 4;
			if (s[1] == 'l')
				t.d |= 8;
			if (s[1] == 'r')
				t.d |= 16;
			if (s[1] == 't')
				t.d |= 32;
		}
	}
	return t.d;
}       