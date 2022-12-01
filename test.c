/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 11:34:13 by yizhang       #+#    #+#                 */
/*   Updated: 2022/12/01 10:49:15 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int i;
    int j;
    int c = 21354;
    int a;
    int b;
    //int *p;
    
    //p = "";
    i = ft_printf("%cjskfha%s\n",',',"aaaaa");
    j = printf("%cjskfha%s\n",',',"aaaaa");
    ft_printf("\nft_printf:len:%i\n%p%%%x",i,"",c);
    printf("\nprintf:len:%i\n%p%%%x",j,"",c);

    a = ft_printf("\n%p","a");
    b = printf("\n%p","a");
    printf("\nft:%i\no:%i\n",a,b);

/*     ft_printf("ft:null:%s\n", (char *)NULL);
    printf("printf:null:%s", (char *)NULL); */

    b = ft_printf("%i,%i,%i,%i",-10,-11,-14,-15);
    printf("\n%i\n",b);

    b = ft_printf("%i",-10);
    printf("\n%i\n",b);

    b = ft_printf("%d%dd%d", 1, 2, -3);
    printf("\nint:%i\n",b);
   /*  ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); */
}