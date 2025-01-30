/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:31:42 by kshakhpa          #+#    #+#             */
/*   Updated: 2025/01/13 14:35:48 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_printf(const char *vtyp, ...)
{
	int		chnm;
	t_fmt	fmt;

	chnm = 0;
	pf_init(&fmt);
	va_start(fmt.args, vtyp);
	while (*vtyp)
	{
		if (*vtyp == '%' && *vtyp++)
		{
			pf_types((char *)vtyp++, &fmt);
			pf_toprint(&fmt);
			chnm += fmt.len;
			pf_reset(&fmt);
		}
		else if (fmt.noprint != 0 && *vtyp++)
			fmt.noprint--;
		else if (++chnm && fmt.noprint == 0)
			ft_putchar_fd(*vtyp++, 1);
	}
	va_end(fmt.args);
	return (chnm);
}
