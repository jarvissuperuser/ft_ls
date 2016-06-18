/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 13:21:51 by tmugadza          #+#    #+#             */
/*   Updated: 2016/06/18 08:21:49 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <unistd.h>

typedef struct	s_n
{
	int count;
	int decision;
	int main;
} t_n;

void	f_lo(char *s)
{
	int	a;

	a = 0;
	while (s[a])
		a++;
	write(1, s, a);
	write(1, "\n", 1);
}


void	ra(DIR *dir)
{
	struct dirent	*entry;

	if ((entry = readdir(dir)) != NULL)
	{
		f_lo(entry->d_name);
		ra(dir);
	}
}


int		main(int ac, char **av)
{
	DIR				*d;

	d = opendir(".");
	ra(d);
	closedir(d);
	return (0);
}
