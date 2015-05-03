/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_to_nine.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 21:00:54 by mbourdel          #+#    #+#             */
/*   Updated: 2015/05/03 21:01:19 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	aff_cinq(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x, -0.9f);
	glVertex2f(x + 0.04f, -0.9f);
	glVertex2f(x - 0.005f, -0.905f);
	glVertex2f(x - 0.005f, -0.945f);
	glVertex2f(x, -0.945f);
	glVertex2f(x + 0.04f, -0.945f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glVertex2f(x, -0.995f);
	glVertex2f(x + 0.04f, -0.995f);
	glEnd();
}

void	aff_six(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x, -0.9f);
	glVertex2f(x + 0.04f, -0.9f);
	glVertex2f(x - 0.005f, -0.905f);
	glVertex2f(x - 0.005f, -0.945f);
	glVertex2f(x - 0.005f, -0.95f);
	glVertex2f(x - 0.005f, -0.995f);
	glVertex2f(x, -0.995f);
	glVertex2f(x + 0.04f, -0.995f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glVertex2f(x, -0.945f);
	glVertex2f(x + 0.04f, -0.945f);
	glEnd();
}

void	aff_sept(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x, -0.9f);
	glVertex2f(x + 0.04f, -0.9f);
	glVertex2f(x + 0.045f, -0.905f);
	glVertex2f(x + 0.045f, -0.945f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glEnd();
}

void	aff_huit(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x, -0.9f);
	glVertex2f(x + 0.04f, -0.9f);
	glVertex2f(x - 0.005f, -0.905f);
	glVertex2f(x - 0.005f, -0.945f);
	glVertex2f(x - 0.005f, -0.95f);
	glVertex2f(x - 0.005f, -0.995f);
	glVertex2f(x, -0.995f);
	glVertex2f(x + 0.04f, -0.995f);
	glVertex2f(x + 0.045f, -0.905f);
	glVertex2f(x + 0.045f, -0.945f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glVertex2f(x, -0.945f);
	glVertex2f(x + 0.04f, -0.945f);
	glEnd();
}

void	aff_neuf(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x, -0.9f);
	glVertex2f(x + 0.04f, -0.9f);
	glVertex2f(x - 0.005f, -0.905f);
	glVertex2f(x - 0.005f, -0.945f);
	glVertex2f(x, -0.995f);
	glVertex2f(x + 0.04f, -0.995f);
	glVertex2f(x + 0.045f, -0.905f);
	glVertex2f(x + 0.045f, -0.945f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glVertex2f(x, -0.945f);
	glVertex2f(x + 0.04f, -0.945f);
	glEnd();
}
