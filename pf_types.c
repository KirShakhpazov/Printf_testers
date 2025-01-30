/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_types.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:40:30 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/11/29 13:40:40 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*pf_types(char *vtyp, t_fmt *fmt)
{
	while (*vtyp && !ft_strchr("cspdiuxX%", *vtyp))
		pf_flags(*vtyp++, fmt);
	if (*vtyp == 'c')
		put_char(fmt);
	else if (*vtyp == 's')
		put_str(fmt);
	else if (*vtyp == 'p')
		put_ptr(fmt);
	else if (*vtyp == 'd' || *vtyp == 'i' )
		put_decm(fmt);
	else if (*vtyp == 'u')
		put_uint(fmt);
	else if (*vtyp == 'x')
		put_hex(fmt);
	else if (*vtyp == 'X')
		put_heks(fmt);
	else if (*vtyp == '%')
		put_perc(fmt);
	return (++vtyp);
}
