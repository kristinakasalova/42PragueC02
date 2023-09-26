/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:51 by kristina          #+#    #+#             */
/*   Updated: 2023/09/26 10:39:49 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;
	int end_value;
	
	i = 0;

	while(str[i] != '\0')
	{
		if ((' ' <= str[i]) && (str[i] <= '~'))
		{
			return (1);
			i++;
		}
		else
			return (0);	 
	}
}

// int	main(void)
// {
// 	char *a;
// 	a = " " ;
  
// 	printf("%d", ft_str_is_printable(a));
// 	return 0;
// }