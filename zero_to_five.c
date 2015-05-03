/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_to_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahus <jbahus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 20:07:51 by mbourdel          #+#    #+#             */
/*   Updated: 2015/05/03 22:09:28 by jbahus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		aff_zero(float x)
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
	glEnd();
}

void		aff_un(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x + 0.045f, -0.905f);
	glVertex2f(x + 0.045f, -0.945f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glEnd();
}

void		aff_deux(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x, -0.9f);
	glVertex2f(x + 0.04f, -0.9f);
	glVertex2f(x + 0.045f, -0.905f);
	glVertex2f(x + 0.045f, -0.945f);
	glVertex2f(x, -0.945f);
	glVertex2f(x + 0.04f, -0.945f);
	glVertex2f(x - 0.005f, -0.95f);
	glVertex2f(x - 0.005f, -0.995f);
	glVertex2f(x, -0.995f);
	glVertex2f(x + 0.04f, -0.995f);
	glEnd();
}

void		aff_trois(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x, -0.9f);
	glVertex2f(x + 0.04f, -0.9f);
	glVertex2f(x + 0.045f, -0.905f);
	glVertex2f(x + 0.045f, -0.945f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glVertex2f(x, -0.995f);
	glVertex2f(x + 0.04f, -0.995f);
	glVertex2f(x, -0.945f);
	glVertex2f(x + 0.04f, -0.945f);
	glEnd();
}

void		aff_quatre(float x)
{
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(x + 0.045f, -0.905f);
	glVertex2f(x + 0.045f, -0.945f);
	glVertex2f(x + 0.045f, -0.95f);
	glVertex2f(x + 0.045f, -0.995f);
	glVertex2f(x, -0.945f);
	glVertex2f(x + 0.04f, -0.945f);
	glVertex2f(x - 0.005f, -0.905f);
	glVertex2f(x - 0.005f, -0.945f);
	glEnd();
}
