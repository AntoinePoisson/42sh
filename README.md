# myShell

myShell or 42sh is a 1st year Epitech project.

<p align="center">
  <img width="424" height="304" src="/42sh.gif">
</p>

Usage:

```console
$ ./42sh
```


	42SH NAME
	42sh - Shell for ninja developers

	42SH DESCRIPTION
	42sh is a UNIX Shell with a lot of features, like autocompletion, history, alias,
      globing.

	42SH FEATURES
	Prompt

	 When standard input is a tty, termcaps prompt is available and includes a lot of features:

             - CTRL^D : Exit the 42sh

             - CTRL^L : Clear the screen

	     - CTRL^A : Move to the start of the line

	     - CTRL^E : Move to the end of the line

             - Right and Left Arrows : Move into command line

             - Up and Down Arrows : Brows throught commands history

             If standard input is not a tty, termcaps prompt is not available.


Globing

	Use Regex in your command line, like ./a.out /tmp/* /dev/[a-z]+?*

Alias

	Using alias is a really useful feature.

	For example, "ll" will be replaced by "ls -l" and "ls -l" will be execute.

	With the same alias, executing "ll -a" will execute "ls -l -a".

Environment

	Environment variables can be used like variables: "setenv var value" to set, "unsetenv var" to unset, "$var" to use and "env" to view.

	Note: The $PATH environment variable contains all the paths where 42sh searches binarys to exec. Delete it is not the best way to use 42sh.


Exit

	Exit 42sh.

	A value can be passed as a parameter: "exit 12" will exit 42sh with the return value of atoi("12");


Echo

	Echo parameters.

	-n option won't print a '\n' at the end of the echo.


cd

	cd to the directory passed in parameter.

	Without parameter, cd will move you into the home directory (such as "cd ~")

	"cd -" will move you into the previous directory.
