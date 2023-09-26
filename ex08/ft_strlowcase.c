/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:49:59 by kristina          #+#    #+#             */
/*   Updated: 2023/09/26 10:47:44 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
        i++;	
	}
	return (str);			
}

// int	main(void)
// {
//     char a[] = "heeLL0";

// 	ft_strlowcase(a);
// 	return 0;
// }