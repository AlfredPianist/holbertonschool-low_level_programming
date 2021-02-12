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
 * mul - muiltiplies two numbers
 * @a: first factor.
 * @b: second factor.
 *
 * Return: the multiplication of integers a and b.
 */
int mul(int a, int b);

/**
 * print_numbers - prints numbers from 0 to 9.
 */
void print_numbers(void);

/**
 * print_most_numbers - prints numbers from 0 to 9, except 2 and 4.
 */
void print_most_numbers(void);

/**
 * more_numbers - prints numbers from 0 to 14.
 */
void more_numbers(void);

/**
 * print_line - prints the character "_" in the terminal n times.
 * @n: the number of times the "_" character will be print.
 */
void print_line(int n);

/**
 * print_diagonal - prints the character "\" n times,
 *                  followed by a new line in a diagonal shape.
 * @n: the number of times the "\" character will be print.
 */
void print_diagonal(int n);

/**
 * print_square - prints the character "#" in an n * n square,
 *                followed by a new line.
 * @size: the size of the square.
 */
void print_square(int size);

/**
 * print_square - prints the character "#" in a squared triangle shape,
 *                followed by a new line.
 * @size: the size of the triangle in lines.
 */
void print_triangle(int size);

/**
 * print_number - prints a number using the _putchar function.
 * @n: the number to be printed.
 */
void print_number(int n);

#endif
