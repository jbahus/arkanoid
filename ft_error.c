/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahus <jbahus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 11:56:53 by jbahus            #+#    #+#             */
/*   Updated: 2015/05/03 22:12:38 by jbahus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	ft_error(const char *str)
{
	ft_putstr("ft_ls: ");
	if (!str)
	{
		ft_putstr(strerror(errno));
		ft_putchar('\n');
	}
	else
		perror(str);
}
