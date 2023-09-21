/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:37 by kristina          #+#    #+#             */
/*   Updated: 2023/09/19 10:40:05 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;
	int end_value;
	
	i = 0;
	end_value = 1;

	while(str[i] != '\0')
	{
		if (('0' <= str[i]) && (str[i] <= '9'))
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
	a = "4946513216l";
  
	printf("%d", ft_str_is_numeric(a));
	return 0;
}