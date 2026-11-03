*This activity has been created as part of the 42 curriculum by basianno.*

# DESCRIPTION

The goal of this project is to recode some libc functions and to add other functions that do not exist in the libc.
These functions will be useful for the next 42 Common Core projects.

# INSTRUCTIONS

Commands to use:

```
make        = compile the library (libft.a)
make re     = recompile everything after a change
make clean  = remove the .o files but keep libft.a
make fclean = remove the .o files and libft.a
```

Include the header in your source files: `#include "libft.h"`.

To use the library in another project, copy libft.a into your project folder and compile as follows: `cc main.c libft.a`

# RESOURCES

Man pages, Stack Overflow, GitHub, YouTube tutorials.

I used AI to explain some functions I struggled to understand and to review my code to find bugs or leaks when needed.
AI also helped me with testing programs for my code.

# DETAILED DESCRIPTION OF THE PROJECT

## Part 1 - Libc functions

Same behavior as the original libc functions, with an `ft_` prefix.

`ft_isalpha` = checks if the character is a letter\
`ft_isdigit` = checks if the character is a digit\
`ft_isalnum` = checks if the character is a letter or a digit\
`ft_isascii` = checks if the value is an ASCII character (0-127)\
`ft_isprint` = checks if the character is printable\
`ft_toupper` = converts a lowercase letter to uppercase\
`ft_tolower` = converts an uppercase letter to lowercase

`ft_memset` = fills a memory area with a byte\
`ft_bzero` = sets a memory area to zero\
`ft_memcpy` = copies a memory area (no overlap)\
`ft_memmove` = copies a memory area, even if the areas overlap\
`ft_memchr` = finds a byte in a memory area\
`ft_memcmp` = compares two memory areas

`ft_strlen` = returns the length of a string\
`ft_strlcpy` = copies a string into a buffer of a given size\
`ft_strlcat` = appends a string to a buffer of a given size\
`ft_strchr` = finds the first occurrence of a character in a string\
`ft_strrchr` = finds the last occurrence of a character in a string\
`ft_strncmp` = compares at most n characters of two strings\
`ft_strnstr` = finds a substring in the first len characters of a string\
`ft_atoi` = converts a string to an int

`ft_calloc` = allocates a zero-initialized memory area\
`ft_strdup` = returns an allocated copy of a string

## Part 2 - Additional functions

Functions that are not in the libc, or exist there in a different form. Functions that allocate memory return NULL if the allocation fails.

`ft_substr` = returns a substring of a string\
`ft_strjoin` = returns the concatenation of two strings\
`ft_strtrim` = removes the characters of a set from both ends of a string\
`ft_split` = splits a string with a delimiter into a NULL-terminated array\
`ft_itoa` = converts an int to a string\
`ft_strmapi` = applies a function to each character and returns a new string\
`ft_striteri` = applies a function to each character of a string in place\
`ft_putchar_fd` = writes a character to a file descriptor\
`ft_putstr_fd` = writes a string to a file descriptor\
`ft_putendl_fd` = writes a string followed by a newline to a file descriptor\
`ft_putnbr_fd` = writes an integer to a file descriptor

## Part 3 - Linked lists

Functions to manipulate lists made of t_list nodes: content holds any type of data, next points to the next node (NULL for the last one).

`ft_lstnew` = creates a new node\
`ft_lstadd_front` = adds a node at the beginning of a list\
`ft_lstadd_back` = adds a node at the end of a list\
`ft_lstsize` = returns the number of nodes in a list\
`ft_lstlast` = returns the last node of a list\
`ft_lstdelone` = frees one node and its content\
`ft_lstclear` = frees a node and all the following ones, then sets the list to NULL\
`ft_lstiter` = applies a function to the content of each node\
`ft_lstmap` = creates a new list by applying a function to each node's content
