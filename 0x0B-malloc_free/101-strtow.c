#include <stdlib.h>
#include <stdio.h>
/**
 * word_len - returns the length of the next word in a string
 * @str: the string
 * Return: length of the word
 */
int word_len(char *str)
{
	int len = 0;

	while (str[len] != '\0' && str[len] != ' ')
	{
		len++;
	}
	return (len);
}
/**
 * count_words - counts the number of words in a string
 * @str: the string
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		while (*str == ' ')
		{
			str++;
		}
		if (*str != '\0')
		{
			count++;
			str += word_len(str);
		}
	}
	return (count);
}
/**
 * strtow - splits a string into words (no arrays, only malloc)
 * @str: input string
 * Return: pointer to array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, word_len_i, word_count;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word_count = count_words(str);
	if (word_count == 0)
	{
		return (NULL);
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	while (*str != '\0' && i < word_count)
	{
		while (*str == ' ')
		{
			str++;
		}
		word_len_i = word_len(str);
		words[i] = malloc((word_len_i + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			while (i > 0)
			{
				free(words[--i]);
			}
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_len_i; j++)
		{
			words[i][j] = str[j];
		}
		words[i][j] = '\0';
		str += word_len_i;
		i++;
	}
	words[i] = NULL;
	return (words);
}
