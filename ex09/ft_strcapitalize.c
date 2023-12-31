/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristina <kristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:50:12 by kristina          #+#    #+#             */
/*   Updated: 2023/09/26 13:54:29 by kristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
	if ((('a' <= str[i]) && (str[i] <= 'z'))\
		&&((0 <= str[i-1]) && (str[i-1] <= 47)))
			str[i] = str[i] - 32;
		else if ((('A' <= str[i]) && (str[i] <= 'Z'))\
			&&((0 <= str[i-1]) && (str[i-1] <= 47)))
			str[i] = str[i];
		else if (('A' <= str[i]) && (str[i] <= 'Z'))
			str[i] = str[i] + 32;

		i++;	
	}
	return (str);			
}

// int	main(void)
// {
//     char a[] = "HELLO+wORLd, what a #day! ";

// 	ft_strcapitalize(a);
// 	return 0;
// }