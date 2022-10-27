/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 08:50:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/27 13:55:37 by yizhang       ########   odam.nl         */
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
	va_list			arg;

	i = 0;
	s = (char *)format;
	va_start(arg, format);
	while (s[i])
	{
		if(s[i] == '%')
		{
			i++;
			if (s[i] == c)
			{
				value = va_arg(arg,char);
				ft_puchar(&value);
			}
			else if (s[i] == s)
			{
				value = va_arg(arg,char *);
				ft_putstr(value);
			}

		}
		else
		ft_puchar(&s[i]);
		i++;
	}
}
