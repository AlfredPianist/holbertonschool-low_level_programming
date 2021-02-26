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
 * reverse_array - reverses an array's contents.
 * @a: the source array.
 * @n: the number of elements in the array.
 */
void reverse_array(int *a, int n);

/**
 * *string_toupper - converts all lowercase characters to uppercase.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *string_toupper(char *);

/**
 * *cap_string - capitalizes all words of a string.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *cap_string(char *);

/**
 * leet - converts a string into 1337.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *leet(char *);

/**
 * rot13 - converts a string to rot13 cypher.
 * @s: the source string
 *
 * Return: a pointer to the string converted.
 */
char *rot13(char *);

/**
 * print_number - prints a number using the _putchar function.
 * @n: the number to be printed.
 */
void print_number(int n);

/**
 * *infinite_add - adds two really large numbers.
 * @n1: the first summand string of integers.
 * @n2: the second summand string of integers.
 * @r: the buffer that the function will use to store the result.
 * @size_r: the size of the buffer.
 *
 * Return: a pointer to the buffer with the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - prints a hexdump of a string.
 * @b: the string to be printed.
 * @size: the size of the buffer.
 */
void print_buffer(char *b, int size);

#endif
