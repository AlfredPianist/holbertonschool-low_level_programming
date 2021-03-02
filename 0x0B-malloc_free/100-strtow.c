#include "holberton.h"

/**
 * wordstotal - counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The total of words of the string.
 */
int wordstotal(char *str)
{
	int counter_str, words_total;

	counter_str = words_total = 0;
	for (counter_str = 0; str[counter_str] != '\0'; counter_str++)
		if (str[counter_str] != ' ' &&
		    (str[counter_str + 1] == ' ' || str[counter_str + 1] == '\0'))
			words_total++;

	return (words_total);
}

/**
 * arraylengths - creates a dynamic array of lengths of each word
 *                depending on the total of words.
 * @str: The string to be calculated.
 * @words_total: The total amount of words.
 *
 * Return: The pointer to the array of word lengths or NULL if failed to
 *         allocate memory.
 */
int *arraylengths(char *str, int words_total)
{
	int counter_str, counter, len;
	int *word_char_count;

	counter_str = counter = len = 0;

	word_char_count = malloc(sizeof(int) * words_total);

	if (word_char_count == NULL)
		return (NULL);

	for (counter_str = 0; str[counter_str] != '\0'; counter_str++)
	{
		if (str[counter_str] != ' ')
		{
			len++;
			if (str[counter_str + 1] == ' ' || str[counter_str + 1] == '\0')
			{
				word_char_count[counter] = len + 1;
				counter++;
				len = 0;
			}
		}
	}

	word_char_count[counter] = '\0';

	return (word_char_count);
}

/**
 * arrayalloc - allocates memory for the resulting array of words..
 * @word_char_ar: The array of lengths of each word.
 * @words_total: The total amount of words to be allocated.
 *
 * Return: The pointer to the resulting array or NULL if failed to
 *         allocate memory.
 */
char **arrayalloc(int *word_char_ar, int words_total)
{
	int counter_str;
	char **words;

	counter_str = 0;
	words = malloc(sizeof(char *) * words_total);

	if (words == NULL)
		return (NULL);

	for (counter_str = 0; counter_str < words_total; counter_str++)
	{
		words[counter_str] = malloc(sizeof(char) * word_char_ar[counter_str]);

		if (words[counter_str] == NULL)
		{
			for (counter_str -= 1; counter_str >= 0; counter_str--)
				free(words[counter_str]);
			free(words);
			return (NULL);
		}
	}

	return (words);
}

/**
 * strtow - converts a string into an array of words.
 * @str: The string to be converted.
 *
 * Return: The pointer to the resulting array or NULL if str is NULL or empty
 *         or if failed to allocate memory.
 */
char **strtow(char *str)
{
	int words_total, len, counter_str, counter;
	int *word_char_ar;
	char **words;

	words_total = len = counter_str = counter = 0;
	words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count the number of words on the string */
	words_total = wordstotal(str);
	if (words_total == 0)
		return (NULL);

	/* Array with lengths of each word */
	word_char_ar = arraylengths(str, words_total + 1);

	/* Allocate memory for the array of words */
	words = arrayalloc(word_char_ar, words_total + 1);

	/* Populate array with each word */
	for (counter_str = 0; str[counter_str] != '\0'; counter_str++)
	{
		if (str[counter_str] != ' ')
		{
			words[counter][len++] = str[counter_str];
			if (str[counter_str + 1] == ' ' || str[counter_str + 1] == '\0')
			{
				words[counter++][len] = '\0';
				len = 0;
			}
		}
	}
	words[counter] = '\0';

	return (words);
}
