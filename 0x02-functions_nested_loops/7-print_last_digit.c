#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Check main
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number n
 */

int print_last_digit(int n)
{ 
    int last_digit = n % 10;

    if (last_digit < 0)
	  last_digit = -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
