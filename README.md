Simple Shell
The ALX software engineering project involves implementing a simple shell, which is a team project. The goal is to develop functionalities similar to those found in the sh shell. This includes features like system navigation, error handling, and command execution.

Usage:
to compile use
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
there are two way to use the shell
non interactive mode: echo "ls -la" | ./hsh
interactive mode: ./hsh
we used valgrind to check leaks in our project
valgrind ./hsh
Team:
Mario Mokhles
Reham alaa eldin mohamed
