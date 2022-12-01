/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utils2.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 12:04:04 by yizhang       #+#    #+#                 */
/*   Updated: 2022/12/01 17:42:40 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	length(long nb);

int	length(long nb)
{
	int	i;

	i = 0;
	if (nb < 9)
		return (i++);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
