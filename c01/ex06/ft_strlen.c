/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:25:34 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/08 17:32:25 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char	*str)
{
	int	m;

	m = 0;
	while (str[m] != 0)
	{
		m++;
	}
	return (m);
}