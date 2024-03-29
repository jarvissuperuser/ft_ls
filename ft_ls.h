/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 13:20:22 by tmugadza          #+#    #+#             */
/*   Updated: 2016/06/19 17:04:02 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include <libft.h>
typedef struct	s_n
{
	int			c;
	int			d;
	int			m;
}				t_n;

typedef struct	s_dir
{
	char		*c;
	char		*buff;
	void		*next;
}				t_dir;

char		*getlist();
int			cs(char c);
int			cd(char c);
int			flag_translate(char *s,t_n t);
#endif
