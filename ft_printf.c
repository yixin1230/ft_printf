/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 08:50:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/17 12:32:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	char			*all;
	int				i;
	va_list			arg;
	int				ret;
	
	
	i = 0;
	ret = 0;
	all = (char *)format;
	va_start(arg, format);
	while (all[i])
	{
		if(all[i] == '%')
		{
			i++;
			if (all[i] == 'c')
				ret += ft_putchar(va_arg(arg, unsigned int));
			else if (all[i] == 's')
				ret += ft_putstr(va_arg(arg, char*));
			else if (all[i] == 'p')
				ret += ft_putptr(va_arg(arg, uintptr_t));
			else if (all[i] == 'i')
				ret += ft_putstr(ft_itoa(va_arg(arg, int)));
		}
		else
		{
			ft_putchar(all[i]);
			ret++;
		}
		i++;
	}
	va_end(arg);
	return (ret);
}
