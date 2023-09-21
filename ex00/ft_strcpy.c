/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:23 by kristina          #+#    #+#             */
/*   Updated: 2023/09/18 13:51:05 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	
	while(src[i] != '\0')
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

	ft_strcpy(dest, src);

	printf("Copied string: %s\n", dest);	
	
	return 0;
}