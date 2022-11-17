/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 11:34:13 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/17 20:09:17 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	int i;
    int j;
    int c = 21354;
    int *p;
    
    p = &c;
    i = ft_printf("%cjskfha%s\n",',',"aaaaa");
    j = printf("%cjskfha%s\n",',',"aaaaa");
    ft_printf("\nft_printf:len:%i\n%p%%%x",i,p,c);
    printf("\nlen:%i\n%p%%%x",j,p,c);
}