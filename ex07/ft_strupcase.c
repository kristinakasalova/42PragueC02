/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:55 by kristina          #+#    #+#             */
/*   Updated: 2023/09/19 15:16:45 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
            printf("%c",str[i]);
            i++;
		}
		else
			{
				printf("%c",str[i]);
                i++;	
			} 
	}
	return str;			
}

int	main(void)
{
    char a[] = "heeLL0";

	ft_strupcase(a);
	return 0;
}