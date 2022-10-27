/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 11:43:02 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/27 14:01:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		ft_putchar(&s[i]);
		i++;
	}
}