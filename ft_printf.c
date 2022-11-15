/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 08:50:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/15 09:24:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	char	*all;
	int		i;
	va_list	arg;
	char	c_value;
	char	*s_value;
	
	i = 0;
	all = (char *)format;
	va_start(arg, format);
	while (all[i]
	{
		if(all[i] == '%')
		{
			i++;
			if (all[i] == 'c')
				ft_putchar()
			else if (all[i] == 's')
				ft_putstr(s);
			else if (all[i] == 'p')
				ft_putstr(s);
			else if (all[i] == 'd')
				ft_putstr(s);
			else if (all[i] == 'i')
				ft_putstr(s);
			else if (all[i] == 'u')
				ft_putstr(s);
			else if (all[i] == 'x')
				ft_putstr(s);
			else if (all[i] == 'X')
				ft_putstr(s);
			else if (all[i] == '%')
				ft_putstr(s);
		}
		else
			ft_putchar(&s[i]);
		i++;
	}
	va_end(arg);
	return (0);
}
