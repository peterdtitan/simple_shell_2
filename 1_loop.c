#include "shell.h"

/**
* _loop - Returns a pointer to a newly allocated space in memory
*/

void _loop(void)
{
		char *input;
		char **args;
		int status;
		int inter = 1, len;

			if (isatty(STDIN_FILENO) != 1)
				inter = 0;

			signal(SIGINT, sigint_handler);

	do {
			if (inter != 0)
{
			/* Print prompt line. */
			len = _strlen("$ ");
			/*printf("#cisfun$ ");*/
			write(STDOUT_FILENO, "$ ", len);
}
			/*Read from prompt line (input) */
			input = _read_line();
			if (input == NULL)
			return;

			/* Split read input into arguments. */
			args = _split_line(input);
			if (args == NULL)
{
			free(input);
			return;
}

			/* Execute according to arguments. */
			status = _execute(args, input);

			/* Free input and arguments. */
			free(input);
			free(args);

	} while (status == 1);
}
