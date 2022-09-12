#include <unistd.h>

/**
 * main - a program that prints exact sentence
 *
 * Description: a function that returns 1
 *
 * Return: 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);
}
