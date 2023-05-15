# 0x16. C - Simple Shell

> Write a simple UNIX command interpreter.
<p align="center">  
<img width="95%" height="450px" src ="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg">
</p>

## List of allowed functions and system calls

- access [(man 2 access)](/Resources/man_2_access.txt)
- chdir [(man 2 chdir)](/Resources/man_2_chdir.txt)
- close [(man 2 close)](/Resources/man_2_close.txt)
- closedir [(man 3 closedir)](/Resources/man_3_closedir.txt)
- execve [(man 2 execve)](/Resources/man_2_execve.txt)
- exit [(man 3 exit)](/Resources/man_3_exit.txt)
- _exit [(man 2 _exit)](/Resources/man_2__exit.txt)
- fflush [(man 3 fflush)](/Resources/man_3_fflush.txt)
- fork [(man 2 fork)](/Resources/man_2_fork.txt)
- free [(man 3 free)](/Resources/man_3_free.txt)
- getcwd [(man 3 getcwd)](/Resources/man_3_getcwd.txt)
- getline [(man 3 getline)](/Resources/man_3_getline.txt)
- getpid [(man 2 getpid)](/Resources/man_2_getpid.txt)
- isatty [(man 3 isatty)](/Resources/man_3_isatty.txt)
- kill [(man 2 kill)](/Resources/man_2_kill.txt)
- malloc [(man 3 malloc)](/Resources/man_3_malloc.txt)
- open [(man 2 open)](/Resources/man_2_open.txt)
- opendir [(man 3 opendir)](/Resources/man_3_opendir.txt)
- perror [(man 3 perror)](/Resources/man_3_perror.txt)
- read [(man 2 read)](/Resources/man_2_read.txt)
- readdir [(man 3 readdir)](/Resources/man_3_readdir.txt)
- signal [(man 2 signal)](/Resources/man_2_signal.txt)
- stat [(__xstat) (man 2 stat)](/Resources/man_2_stat.txt)
- lstat [(__lxstat) (man 2 lstat)](/Resources/man_2_lstat.txt)
- fstat [(__fxstat) (man 2 fstat)](/Resources/man_2_fstat.txt)
- strtok [(man 3 strtok)](/Resources/man_3_strtok.txt)
- wait [(man 2 wait)](/Resources/man_2_wait.txt)
- waitpid [(man 2 waitpid)](/Resources/man_2_waitpid.txt)
- wait3 [(man 2 wait3)](/Resources/man_2_wait3.txt)
- wait4 [(man 2 wait4)](/Resources/man_2_wait4.txt)
- write [(man 2 write)](/Resources/man_2_write.txt)

## Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

## Output
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
> AND
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
