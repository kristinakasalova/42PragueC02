/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:28 by kristina          #+#    #+#             */
/*   Updated: 2023/09/18 13:51:13 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
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
    
	ft_strncpy(dest, src, 7);

	printf("Copied string: %s\n", dest);	
	
	return 0;
}