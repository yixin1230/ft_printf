/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 11:34:13 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/17 12:33:35 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	int i;
    int j;
    int c = 0;
    int *p;
    
    p = &c;
    i = ft_printf("%cjskfha%s",',',"aaaaa");
    j = printf("%cjskfha%s",',',"aaaaa");
    ft_printf("\nft_printf:len:%i\n%p",i,p);
    printf("\nlen:%i\n%p",j,p);
}