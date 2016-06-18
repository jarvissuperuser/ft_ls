/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 13:21:51 by tmugadza          #+#    #+#             */
/*   Updated: 2016/06/18 14:49:36 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <unistd.h>
#include "ft_ls.h"

void	f_lo(char *s)
{
	int	a;

	a = 0;
	while (s[a])
		a++;
	write(1, s, a);
	write(1, "\n", 1);
}


char	*ra(DIR *dir)
{
	struct dirent	*entry;

	if ((entry = readdir(dir)) != NULL)
	{
		return(entry->d_name);
	}
}

void	rd(DIR *dir, t_n f)

int		main(int ac, char **av)
{
	DIR				*d;

	d = opendir(".");
	ra(d);
	closedir(d);
	return (0);
}
