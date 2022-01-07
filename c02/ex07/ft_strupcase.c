/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:41:30 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/11 11:42:56 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	int	b;

	b = 0;
	while (*(str + b) != '\0')
	{
		if (str[b] >= 'a' && str[b] <= 'z')
		{
			str[b] -= 32;
		}
		b++;
	}
	return (str);
}
