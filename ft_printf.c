/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 08:50:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/27 14:13:10 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	char			*s;
	size_t			i;
	unsigned int	value;
	char			*s_value;
	va_list			arg;

	i = 0;
	s = (char *)format;
	va_start(arg, format);
	while (s[i])
	{
		if(s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
			{
				value = va_arg(arg,int);
				ft_putchar(value);
			}
		}
		else
		ft_putchar(&s[i]);
		i++;
	}
	va_end(arg);
	return (0);
}
