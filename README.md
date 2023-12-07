 # Simple Shell Project in C

This is a simple shell implementation in C that provides basic command-line functionality.

## Features

- Basic command execution
- Support for built-in commands (e.g., `cd`, `help`, `exit`)
- Input and output redirection
- Piping of commands

## Getting Started

### Prerequisites

To build and run the shell, you will need the following:

- C compiler (e.g., GCC)
- Standard C library (stdlib.h)
- POSIX-compliant operating system (Linux/Unix)

### Building

1. Clone this repository to your local machine.
2. Navigate to the project directory.

```bash
$ git clone https://github.com/dimka90/simple_shell.git
$ cd your-shell-project
Compile the source code.
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
Running the Shell
Once the project is compiled, you can start the shell by running the executable:
$ ./hsh
### Usage
The shell supports basic command execution and various features mentioned in the Features section. It accepts single commands or a series of commands separated by pipe |.

Example:
$ ls -la | grep shell
### Commands

Here are some of the built-in commands supported by the shell:

- cd [directory]: Change the current working directory.
- env: list the current environment vairable
- setenv: set an environment vairable
- unsetenv: remove an environment vairable
- exit: Exit the shell.
Known Issues
- memory leaksContributing
### contribution
Contributions are welcome! If you find any bugs or want to add new features, feel free to submit a pull request. Please follow the standard coding conventions and ensure proper testing.
