# 0x16. C - Simple Shell

### Low-Level Programming

**Authors:** *Surina Singh and Rebekah Cupido*

## Description

Write a simple UNIX command interpreter.

---

## Resources

- [Everything you need to know to start coding your own shell](https://https://alx-intranet.hbtn.io/concepts/64)
- [Approaching a Project](https://https://alx-intranet.hbtn.io/concepts/350)
- [Unix shell](https://https://en.wikipedia.org/wiki/Unix_shell)
- [Thompson shell](https://https://en.wikipedia.org/wiki/Thompson_shell)
- [Ken Thompson](https://https://en.wikipedia.org/wiki/Ken_Thompson)


## General Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to
* Write a `README` with the description of your project
* You should have an `AUTHORS` file at the root of your repository, listing all individuals having contributed content to the repository. Format, see `Docker`

---

## Compilation
Your code will be compiled this way:
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```

## Testing
Your shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
---

# Tasks 

## Mandatory Tasks
### 0. Betty would be proud
### 1. Simple shell 0.1
### 2. Simple shell 0.2
### 3. Simple shell 0.3
### 4. Simple shell 0.4
### 5. Simple shell 1.0

## Advanced Tasks
### 

## Manual Page
### In order to access the manual page run the following command: man ./man_3_printf.
