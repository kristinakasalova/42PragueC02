/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:33 by kristina          #+#    #+#             */
/*   Updated: 2023/09/19 10:31:05 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;
	int end_value;
	
	i = 0;
	end_value = 1;

	while(str[i] != '\0')
	{
		//printf("%d", end_value);
		if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
		{
			end_value = 1;
			//printf("%c \n",str[i]); 
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
	a = "he11o";
  
	//ft_str_is_alpha(a);
	printf("%d", ft_str_is_alpha(a));
	return 0;
}