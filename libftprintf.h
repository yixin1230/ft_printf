/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 10:56:35 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/17 20:05:54 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include "libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(unsigned int c);
int	ft_putstr(char *s);
int	ft_putptr(uintptr_t p);
int	putwhatever_num(uintptr_t p, char *s);

#endif
