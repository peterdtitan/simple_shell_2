#include "shell.h"


/**
 * main - Simple shell
 * @argc: argument count
 * @argv: argument values vector.
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc,
__attribute__((unused)) char **argv)
{

	/*Load config files, if any.*/

	/* Run command loop.*/
	_loop();

	/* Perform any shutdown/cleanup.*/

	return (0);
}
