/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:48 by kristina          #+#    #+#             */
/*   Updated: 2023/09/19 12:57:47 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int i;
	int end_value;
	
	i = 0;
	end_value = 1;

	while(str[i] != '\0')
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
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

int	main(void)
{
	char *a;
	a = "HEL1o";
  
	printf("%d", ft_str_is_uppercase(a));
	return 0;
}