/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:51:51 by ngastana          #+#    #+#             */
/*   Updated: 2023/11/03 12:28:08 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char	*deposit, char const	buffer[BUFFER_SIZE + 1])
{
	int		i;
	int		j;
	char	*str;

	if (!deposit)
	{
		deposit = (char *)malloc(1 * sizeof(char));
		deposit[0] = '\0';
	}	
	if (!deposit || !buffer)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(deposit) + ft_strlen(buffer) + 1));
	if (str == NULL)
		return (0);
	i = -1;
	j = 0;
	if (deposit)
		while (deposit[++i] != '\0')
			str[i] = deposit[i];
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[ft_strlen(deposit) + ft_strlen(buffer)] = '\0';
	free (deposit);
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	if (!s)
		return (NULL);
	ch = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
