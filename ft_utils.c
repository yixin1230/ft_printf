/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utils.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 11:05:17 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/17 18:46:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(unsigned int c);
int	ft_putstr(char *s);
int	ft_putptr(uintptr_t p);
int	putwhatever_num(uintptr_t p, char *s);

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
	char	*s;

	i = 2;
	s = "0123456789abcdef";
	write(1, "0x", 2);
	i += putwhatever_num(p, s);
	return (i);
}

int	putwhatever_num(uintptr_t p, char *s)
{
	int	i;
	uintptr_t	len;

	i = 0;
	len = (uintptr_t)ft_strlen(s);
	if (p < len)
		i += write(1, &s[p], 1);
	else
	{
		putwhatever_num(p / len, s);
		i += write(1, &s[p % len], 1);
	}
	return (i);
}