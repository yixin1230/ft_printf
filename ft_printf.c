/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 08:50:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/12/06 10:07:09 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_flags(char c, va_list arg, int ret)
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

static int	checkc_spdiux(char *all, int i)
{
	if (all[i] != '\0' || all[i] == 'c' || all[i] == 's' || all[i] == 'd'
		|| all[i] == 'i' || all[i] == 'p' || all[i] == 'u'
		|| all[i] == 'x' || all[i] == 'X' || all[i] == '%')
		return (1);
	return (0);
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
			if (checkc_spdiux(all, i) == 0)
				break ;
			ret = print_flags(all[i], arg, ret);
		}
		else
			ret += ft_putchar(all[i]);
		i++;
	}
	va_end(arg);
	return (ret);
}
