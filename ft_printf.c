/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 08:50:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/27 11:39:00 by yizhang       ########   odam.nl         */
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
	va_start(arg, 	format);
	while (s[i])
	{
		if(s[i] == '%')
		{
			if(s[i + 1] == c)
			{
				value = va_arg(arg,char);
				ft_puchar(&value);
			}
		}
		i++;
	}
}
