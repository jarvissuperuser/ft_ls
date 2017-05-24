/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 13:21:51 by tmugadza          #+#    #+#             */
/*   Updated: 2016/06/19 16:50:46 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft_ls.h"

int		f_lo(char *s)
{
	int	a;

	a = 0;
	while (s[a])
		a++;
	if (a > 0)
	{
		write(1, s, a);
		write(1, "\t\t", 1);
		return (1);
	}
	else
	{
		return (0);
	}
}

int		f_np(char *s)
{
	int	a;

	a = 0;
	while (s[a])
		a++;
	if (a > 0)
	{
		if (s[0] != '.')
		{
			write(1, s, a);
			write(1, "\t\t", 1);
		}
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ra(DIR *dir)
{
	struct dirent	*entry;

	if ((entry = readdir(dir)) != NULL)
	{
		return (entry->d_name);
	}
	else
	{
		exit(0);
	}
}

void	rd(DIR *d, t_n f)
{
	char	*s;

	if ((f.d & 2))
	{
		if (f_lo(ra(d)))
			rd(d, f);
	}
	if ((f.d & 32) == 0)
	{
		if (f_np(ra(d)))
			rd(d, f);
	}
}

int		main(int ac, char **av) {
	DIR *d;
	t_n t;

	d = opendir(".");
	t.d = 0;
	if (ac >= 2) {
		t.d = flag_translate(av[1],t);
	}
	rd(d, t);
	closedir(d);
	write(1, "\n", 1);
	return (0);
}
