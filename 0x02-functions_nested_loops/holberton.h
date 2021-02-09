#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by a new line
 *                      10 times.
 */
void print_alphabet_x10(void);

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
 * print_sign - finds if an integer is positive, negative or zero.
 *         Also prints its sign.
 * @n: The integer to find.
 *
 * Return: 1 if integer is positive, 0 if zero, and -1 if negative.
 */
int print_sign(int n);

/**
 * _abs - prints the absolute value of a number.
 * @n: The integer to evaluate.
 *
 * Return: the absolute value of a number.
 */
int _abs(int);

/**
 * print_last_digit - returns the value of the last digit of a number.
 * @n: the number subject to search its last value.
 *
 * Return: the last digit of the number.
 */
int print_last_digit(int n);

/**
 * jack_bauer - prints every minute of the clock in 24 hour format.
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table.
 */
void times_table(void);

/**
 * add - adds two numbers
 * @a: first summand.
 * @b: second summand.
 *
 * Return: the sum of integers a and b.
 */
int add(int a, int b);

/**
 * print_to_98 - prints up to the number 98.
 * @n: the integer from which it will start printing.
 *
 * Description: prints from integer n up to 98.
 */
void print_to_98(int n);

/**
 * print_times_table - prints the times table of n * n.
 * @n: the number in which the matrix n * n will be print.
 *
 * Description: prints a matrix of n * n numbers, only from 0 to 15.
 */
void print_times_table(int n);

#endif
