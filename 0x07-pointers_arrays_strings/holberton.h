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

/**
 * print_chessboard - prints a chessboard configuration.
 * @a: the chessboard matrix.
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the sum of the diagonals of a n * n matrix.
 * @a: the source matrix to be operated.
 * @size: the size of the matrix.
 */
void print_diagsums(int *a, int size);

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the source pointer.
 * @to: the destination string.
 */
void set_string(char **s, char *to);

#endif
