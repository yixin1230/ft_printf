/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 10:56:35 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/15 09:27:10 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include "libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);

#endif
