/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrito <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:02:12 by hbrito            #+#    #+#             */
/*   Updated: 2019/10/17 14:24:17 by hbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (!((str[cont] >= 'A' && str[cont] <= 'Z') ||
			(str[cont] >= 'a' && str[cont] <= 'z') || (str[0] == '\0')))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}
