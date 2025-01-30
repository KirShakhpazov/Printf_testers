/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_uint(unsigned int n)
{
	int			len;
	char		*str;
	char		*uint;
	long long	nbr;

	uint = "0123456789";
	len = count_char(n, 10);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = uint[0];
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = uint[(nbr % 10)];
		nbr /= 10;
		len--;
	}
	return (str);
}
