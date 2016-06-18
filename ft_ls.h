/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 13:20:22 by tmugadza          #+#    #+#             */
/*   Updated: 2016/06/11 13:20:26 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
typedef struct	s_n
{
	int count;
	int decision;
	int main;
}		t_n;

char	*getlist();
int	cs(char c);
int	cd(char c);
#endif