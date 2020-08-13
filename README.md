# myShell

myShell or 42sh is a 1st year Epitech project.

Usage:
```console
$ ./42sh
```

<p align="center">
  <img width="424" height="304" src="https://github.com/pscott/42sh/blob/master/42sh.gif" alt="42sh">
</p>

Explication:

	42SH NAME
	42sh - Shell inspire of TCSH

	42SH DESCRIPTION
	42sh is a UNIX Shell with a lot of features, like autocompletion, history, alias,
      globing.

	42SH FEATURES
	Prompt

	 When standard input is a tty, termcaps prompt is available and includes a lot of features:<br/>
             - CTRL^D : Exit the 42sh<br/>
             - CTRL^L : Clear the screen<br/>
	     - CTRL^A : Move to the start of the line<br/>
	     - CTRL^E : Move to the end of the line<br/>
             - Right and Left Arrows : Move into command line<br/>
             - Up and Down Arrows : Brows throught commands history<br/>
             If standard input is not a tty, termcaps prompt is not available.<br/>

Globing:

	Use Regex in your command line, like ./a.out /tmp/* /dev/[a-z]+?*

Alias:

	Using alias is a really useful feature.<br/>
	For example, "ll" will be replaced by "ls -l" and "ls -l" will be execute.<br/>
	With the same alias, executing "ll -a" will execute "ls -l -a".<br/>

Environment:

	Environment variables can be used like variables: "setenv var value" to set, "unsetenv var" to unset, "$var" to use and "env" to view.<br/>
	Note: The $PATH environment variable contains all the paths where 42sh searches binarys to exec. Delete it is not the best way to use 42sh.<br/>


Exit:

	Exit 42sh.<br/>
	A value can be passed as a parameter: "exit 12" will exit 42sh with the return value of atoi("12");<br/>


Echo:

	Echo parameters.<br/>
	-n option won't print a '\n' at the end of the echo.<br/>


cd:

	cd to the directory passed in parameter.<br/>
	Without parameter, cd will move you into the home directory (such as "cd ~")<br/>
	"cd -" will move you into the previous directory.<br/>
