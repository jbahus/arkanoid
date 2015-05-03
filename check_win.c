/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_win.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahus <jbahus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 22:22:52 by jbahus            #+#    #+#             */
/*   Updated: 2015/05/03 23:18:44 by jbahus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

int		check_win(t_env *env)
{
	int		i;

	i = 0;
	while (env->map[i])
	{
		if (env->map[i] == '1' || env->map[i] == '2' || env->map[i] == '3')
			return (0);
		i++;
	}
	ft_putendl("GG, a winner is YOU! :D");
	return (1);
}
