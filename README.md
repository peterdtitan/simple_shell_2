# Simple_shell_2

## Description
This team project is part of the first year curriculum of ALX-Holberton School.
This is a simple command interpreter.

## Authors
* **Peter C. Okorafor**
* **Tomiwa N. Okafor**

## Files
### man_1_simple_shell
Man page for the HSH simple shell.

### shell.h
Header file.
Prototypes and extern variables definition.

### 0_shell.c

### 1_loop.c
It contains the main iterative component, which calls the functions that are responsible for: printing the prompt, reading the command line, parsing the command line and executing.

### 2a_getline.c
Contains _getline function which reads an entire line from stream and stores it in a address of the buffer.

### 2b_getc.c
Contains the auxiliar _getc function which reads the next character in the stream.

### 2_read.c
Contains the _read_line function which calls the getline function to read the command lines entered in the prompt.

### 3a_strtok.c
It contains the _strtok auxiliary function code, which in turn depends on the auxiliary functions _strtok_r, _strcspn and _strspn.

### 3_parce.c
It contains the _split_line function, which calls the _strtok function to split the line entered into the prompt and then returns it as an array containing the tokens.

### 4_execute.c
It contains the _execute function, which is responsible for checking if the command entered is a built-in, otherwise, it sends it to its execution in _launch.

### 5_builtin.c
This file contains all built-in functions such as _cd, _help, hsh_exit and _env.

### 6_process.c
It contains the _launch function that is responsible for creating a child process, in which it makes the execve system call, passing the commands correctly formatted from the PATH.

### 7a_getenv.c
It contains the _getenv function which searches for a variable in the list of environment variables and returns the corresponding string.

### 7b_split_path.c
It contains the _split_path function which is responsible for splitting the string returned by _getenv on each of the paths.

### 7_check_path.c
It contains the _split_path function that checks if the command entered in the prompt is in one of the paths, and in this case, it gives the right format to enter it to the execve system call.

### 8_mem_aux.c
It contains all auxiliary memory functions such as _realloc.

### 9_str_aux.c
It contains all auxiliary string functions such as _strlen, _strcat, _strcmp, _strcpy and strncmp.

## Functionality
### Functionality 0
* Contains README, man, AUTHORS files
The AUTHORS file at the root of the repository, listing all individuals having contributed content to the repository.


### Functionality 1
* Styling
The code uses the Betty style. It is checked using betty-style.pl and betty-doc.pl
The code has no more more than 5 functions per file

### Functionality 3
* Simple shell 0.1
Write a UNIX command line interpreter.

Usage: simple_shell
The Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
Handle the end of file condition (Ctrl+D)


### Functionality 4
* Simple shell 0.1.1
Simple shell 0.1 +

Own getline function.
Use a buffer to read many chars at once and call the least possible the read system call.
Use static variables.
The getline function is no used.


### Functionality 5
* Simple shell 0.2
Simple shell 0.1 +

Handle command lines with arguments.


### Functionality 6
* Simple shell 0.2.1
Simple shell 0.2 +

Use our own strtok function.


### Functionality 7
* Simple shell 0.3
Simple shell 0.2 +

Handle the PATH.


### Functionality 8
* Simple shell 0.4
Simple shell 0.3 +

Implement the exit built-in, that exits the shell.
It doesn't have to handle any argument to the built-in exit.


### Functionality 11
* Simple shell 1.0
Simple shell 0.4 +

Implement the env built-in, that prints the current environment.


### Functionality 13
* Simple shell 1.0 +

Implement the builtin command cd:

Changes the current directory of the process.
Command syntax: cd [DIRECTORY]
If no argument is given to cd the command must be interpreted like cd $HOME.
Handles the command cd -.
Updates the environment variable PWD when one changes directory.


### Functionality 19
* Simple shell 1.0 +

Help built-in.
Usage: help [BUILTIN]

## Getting Started

### Prerequisites

* Linux Ubuntu 14.04.3 LTS
* gcc 4.8.4

After cloning this repository, you must run the following compilation command:

```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

```

### Example use

To run the shell in interactive mode, the following command must be written:

```sh

$ ./hsh

```

But if you want to run a command in non-interactive mode, it is executed as follows:

```sh

$ echo "/bin/ls" | ./hsh

```

To execute a command in interactive mode, you can write it as follows:

```

$ ls

```
And you can also execute the command with flags and parameters as follows:

```

$ ls -la /usr

```

### Built-in commands:

You can use the cd command to move between the directory system like this:

```

$ cd /usr

```

The env command is used to print the environment variables like this:

```

$ env

```

The help command shows how to use a built-in command like this:

```

$ help cd

```

To exit the shell you can use the exit command as follows:

```

$ exit


**************************************************
This is the second group project in the "ALX-Holberton" program's first sprint.

**************************************************

