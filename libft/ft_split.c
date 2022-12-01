/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:46:39 by sabamikan         #+#    #+#             */
/*   Updated: 2022/11/29 17:30:27 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s != NULL && s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (word);
}

size_t	ft_size_count(char const *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] != c && s[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

void	ft_free_all(char **strs, int j)
{
	while (0 < j)
	{
		free(strs[j]);
		j--;
	}
	free(strs);
}

char	**ft_creat(char const *s, char c, size_t word, char **strs)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	while (j < word)
	{
		size = 0;
		while (s[i] == c)
			i++;
		size = ft_size_count(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
		{
			ft_free_all(strs, j);
			return (NULL);
		}
		i = i + size;
		j++;
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	size_t		word;
	char		**strs;

	word = ft_word_count(s, c);
	strs = (char **)malloc(sizeof(char *) * (word + 1));
	if (!strs)
		return (NULL);
	return (ft_creat(s, c, word, strs));
}
