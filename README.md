# myShell
## Purpose:
myShell or 42sh is a 1st year Epitech project.<br/>
It's a command-line interpreter Bash-like.

<p align="center">
  <img width="424" height="304" src="https://github.com/pscott/42sh/blob/master/42sh.gif" alt="42sh">
</p>

## Usage:

### Installation:
```
$>  git clone https://github.com/AntoinePoisson/myShell.git
$>  cd myShell && make
$>  ./42sh
```

### Explication:

	42SH NAME
	42sh - Shell inspire of TCSH

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
## Features
  - Prompt with line edition
  - Builtins `alias`, `bg`, `cd`, `echo`, `exit`, `export`, `fg`, `hash`, `jobs`, `set`, `source`, `test`, `type`, `unalias`, `unset`
  - Executing simple commands
  - Redirection `>`, `>>`, `<` and `|`
  - Heredoc `<<`
  - Logical operands `&&` and `||`
  - Separator `;`
  - Inhibitors `"`, `'` and `\`
  - Environment and local variables `$VAR` or `${VAR}`
  - Command substitution `$(CMD)`
  - Dynamical autocompletion
