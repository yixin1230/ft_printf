/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 08:50:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/12/01 17:36:40 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_flags(char c, va_list arg, int ret)
{
	if (c == 'c')
		ret += ft_putchar(va_arg(arg, unsigned int));
	else if (c == 's')
		ret += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		ret += ft_putptr(va_arg(arg, uintptr_t));
	else if (c == 'd' || c == 'i')
		ret += ft_putint(va_arg(arg, int));
	else if (c == 'u')
		ret += putwhatever_num(va_arg(arg, unsigned int), "0123456789");
	else if (c == 'x')
		ret += putwhatever_num(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ret += putwhatever_num(va_arg(arg, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		ret += ft_putchar('%');
	return (ret);
}

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
		if (all[i] == '%')
		{
			i++;
			ret = print_flags(all[i], arg, ret);
		}
		else
			ret += ft_putchar(all[i]);
		i++;
	}
	va_end(arg);
	return (ret);
}
