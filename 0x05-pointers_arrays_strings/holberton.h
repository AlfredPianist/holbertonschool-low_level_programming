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
 * reset_to_98 - writes the value of the variable to 98 using pointers.
 * @*n: the value of the integer to be rewritten to 98.
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integer type variables.
 * @a: the first integer to be swapped.
 * @b: the second integer to be swapped.
 */
void swap_int(int *a, int *b);

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
 * print_rev - prints a string reversed.
 * @s: the string to be printed.
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string, starting from the first
 *          one
 * @str: the string to be printed.
 */
void puts2(char *str);

/**
 * puts_half - prints the second half of the string
 * @str: the string to be printed.
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers.
 * @a: the array of integers to be printed.
 * @n: the ammount of integers to be printed.
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination of the copied string.
 * @src: the string to be copied.
 */
char *_strcpy(char *dest, char *src);

int _atoi(char *s);

#endif
