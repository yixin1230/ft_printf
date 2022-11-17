/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utils.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 11:05:17 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/17 12:40:30 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(unsigned int c);
int	ft_putstr(char *s);
int	ft_putptr(uintptr_t p);
int	puthex(uintptr_t p);

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putchar(unsigned int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putptr(uintptr_t p)
{
	int	i;

	i = 2;
	write(1, "0x", 2);
	i += puthex(p);
	return (i);
}

int	puthex(uintptr_t p)
{
	char	*s;
	int		i;

	i = 0;
	s = "0123456789abcdef";
	if (p <= 16)
		i += write(1, &s[i], 2);
	else
	{
		puthex(p / 16);
		i += write(1, &s[p % 16], 1);
	}
	return (i);
}