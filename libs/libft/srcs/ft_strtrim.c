/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeldame <bbeldame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:32:26 by bbeldame          #+#    #+#             */
/*   Updated: 2017/10/25 21:04:03 by bbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char		*str;

	if (!s)
		return (NULL);
	j = 0;
	len = ft_strlen(s);
	i = len;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j])
		j++;
	if (s[j] == '\0')
		return (ft_strdup("\0"));
	len = len - j;
	while ((s[--i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		len = len - 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (len--)
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
