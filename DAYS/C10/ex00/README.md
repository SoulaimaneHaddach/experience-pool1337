## Exercise 00: display_file

- Create a `program` called `ft_display_file` that displays, on the standard output, only the content of the file given as argument.
- The submission directory should have a `Makefile` with the following rules: `all`, `clean`, `fclean`. The binary will be called `ft_display_file`.
- The `malloc` function is forbidden. You can only do this exercise by declaring fixed-sized array.
- All files given as arguments will be valid.
- Error messages have to be displayed on their reserved output.
```
$> ./ft_display_file
File name missing.
$> ./ft_display_file Makefile
*contenu du Makefile*
$> ./ft_display_file Makefile display_file.c
Too many arguments.
$>
```
- Allowed functions: close, open, read, write


### Summary

| **`open()`**   | connects your program to a file, gives you an fd number           |
| **`read()`**   | copies bytes from the file into your buffer, moves cursor forward |
| **`write()`**  | sends bytes from your buffer to a destination (screen, file, etc) |
| **`close()`**  | releases the fd, frees the slot in the table                      |
| **fd**         | just a number — your ID card to access the file                   |
| **buffer**     | a temporary box that holds data between read and write            |
| **the loop**   | needed because the file might be bigger than the buffer           |
| **bytes_read** | always write exactly this — never the full buffer size            |