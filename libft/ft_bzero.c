/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 09:49:34 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/04 12:02:12 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *p;

	p = s;
	while(n > 0)
	{
		*p++ = '\0';
		n--;
	}
}