Exercise 05 : ft_split
Exercise 05
ft_split
Turn-in directory : ex05/
Files to turn in : ft_split.c
Allowed functions : malloc
• Create a function that splits a string of character depending on another string of
characters.
• You’ll have to use each character from the string charset as a separator.
• The function returns an array where each element of the array contains the address
of a string wrapped between two separators. The last element of that array should
equal to 0 to indicate the end of the array.
• There cannot be any empty strings in your array. Get your own conclusions accordingly.
• The string given as argument won’t be modifiable.
• Here’s how it should be prototyped :
```C
	char **ft_split(char *str, char *charset);
```
