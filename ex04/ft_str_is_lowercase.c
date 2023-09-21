/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:43 by kristina          #+#    #+#             */
/*   Updated: 2023/09/21 13:34:14 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;
	int end_value;
	
	i = 0;
	end_value = 1;

	while(str[i] != '\0')
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
		{
			end_value = 1;
			i++;
		}
		else
			{
				end_value = 0;
				return end_value;	
			} 
	}
	return end_value;			
}

// int	main(void)
// {
// 	char *a;
// 	a = "HEL10";
  
// 	printf("%d", ft_str_is_lowercase(a));
// 	return 0;
// }