#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _islower - prints if a letter is lowercase.
 * @c: The character to find.
 *
 * Return: 1 if letter is lowercase, 0 otherwise.
 */
int _islower(int c);

/**
 * _isalpha - prints if a character is alphabetic.
 * @c: The character to find.
 *
 * Return: 1 if character is alphabetic, 0 otherwise.
 */
int _isalpha(int c);

/**
 * _abs - prints the absolute value of a number.
 * @n: The integer to evaluate.
 *
 * Return: the absolute value of a number.
 */
int _abs(int);

/**
 * _isupper - checks if character is uppercase.
 * @c: the character to be checked.
 *
 * Description: checks if a character is uppercase and returns 1 if
 *              uppercase and 0 otherwise.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c);

/**
 * _isdigit - checks if character is digit.
 * @c: the character to be checked.
 *
 * Description: checks if a character is digit and returns 1 if
 *              it is and 0 otherwise.
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c);

/**
 * _strlen - returns the length of a string
 * @s: the string to be calculated.
 *
 * Return: the length of the string s.
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @str: the string to be printed.
 */
void _puts(char *str);

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination of the copied string.
 * @src: the string to be copied.
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted to integer
 *
 * Return: the converted integer.
 */
int _atoi(char *s);

/**
 * *_strcat - concatenates two strings overwriting the NUL character
 *            from the first string.
 * @dest: the destination string.
 * @src: the source string.
 *
 * Return: a pointer of the resulting string.
 */
char *_strcat(char *dest, char *src);

/**
 * *_strncat - concatenates two strings overwriting the NUL character
 *             from the first string, but using at most n bytes from src.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of bytes to be used from src.
 *
 * Return: a pointer of the resulting string.
 */
char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy - copies a string, printing NUL characters if the size of
 *             destination is large enough, or cropping otherwise.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the size of the destination string.
 *
 * Return: a pointer of the resulting string.
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * *_strcmp - compares two strings outputing an integer.
 *
 * Description: compares two strings, and its output, being an integer,
 *              shows the difference in ASCII between characters in s1
 *              and s2. If 0, then both strings are equal. If positive,
 *              then the character being compared from s1 is greater than s2,
 *              negative if otherwise.
 * @s1: the source string.
 * @s2: the string it will be compared to.
 *
 * Return: an integer.
 */
int _strcmp(char *s1, char *s2);

/**
 * *_memset - fills memory with a constant byte set by n.
 * @s: the destination string.
 * @b: constant byte to be set.
 * @n: nuimber of bytes.
 *
 * Return: a pointer of the resulting string.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * *_memcpy - copies a memory area.
 * @dest: the destination string.
 * @src: the source memory area.
 * @n: the number of bytes to be used from src.
 *
 * Return: a pointer of the resulting string.
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * *_strchr - locates a character in a string.
 * @s: the source string.
 * @c: the character to be located in a string.
 *
 * Return: a pointer of the resulting string.
 */
char *_strchr(char *s, char c);

/**
 * *_strspn - gets the length of a prefix substring.
 *
 * Description: 0 if first character doesn't exist.
 * @s: the source string.
 * @accept: the substring of accepted characters.
 *
 * Return: the length of the substring.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the source string.
 * @accept: the substring of accepted characters.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if not found.
 */
char *_strpbrk(char *s, char *accept);

/**
 * *_strstr - locates a specific substring from a string.
 * @haystack: the source string.
 * @needle: the substring to be located.
 *
 * Return: a pointer to the substring from haystack or NULL if not found.
 */
char *_strstr(char *haystack, char *needle);

#endif
