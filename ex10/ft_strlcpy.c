/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:50:15 by kristina          #+#    #+#             */
/*   Updated: 2023/09/19 15:40:25 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
{
	int i;
	i = 0;
	
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return dest;
}

int	main(void)
{
	char dest[15];
	char *src;
	src = "Hello 42Prague!";
    
	ft_strlcpy(dest, src, 7);

	printf("Copied string: %s\n", dest);	
	
	return 0;
}