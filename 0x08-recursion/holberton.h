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
 * _puts_recursion - prints a string recursively, followed by a new line.
 * @s: the string to be print.
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string recursively backwards.
 * @s: the string to be print.
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string in a recursive manner.
 * @s: the string to be print.
 */
int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a number recursively.
 * @n: the number to be operated.
 *
 * Return: n!
 */
int factorial(int n);

/**
 * _pow_recursion - returns the power of a number recursively.
 * @x: the base.
 * @y: the exponent.
 *
 * Return: x to the power of y.
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number recursively.
 * @n: the number whose square root must be found.
 *
 * Return: The helper function _sqrt(n, 0).
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - returns if a number n is prime recursively.
 * @n: the number to be found its prime quality.
 *
 * Return: the helper function _prime(n, 5)
 *
 */
int is_prime_number(int n);

/**
 * is_palindrome - returns if a string is palindromic.
 * @s: the string to be operated.
 *
 * Return: the helper function _prime(n, 5)
 */
int is_palindrome(char *s);

/**
 * wildcmp - compares two strings. The second one may have the * wildcard.
 * @s1: the source string.
 * @s2: the string to be compared to.
 *
 * Return: 1 if two strings are equal even with *, 0 otherwise.
 */
int wildcmp(char *s1, char *s2);

#endif
