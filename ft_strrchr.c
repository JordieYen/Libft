/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:32:41 by jking-ye          #+#    #+#             */
/*   Updated: 2021/06/03 18:44:59 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			p = &str[i];
		i++;
	}
	return (p);
}