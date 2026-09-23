*This activity has been created as part of the 42 curriculum by abaptist.*

# libft

## Description

`libft` is a custom C library built from scratch as part of the 42 curriculum. The goal is to reimplement a set of standard C library functions (`libc`) as well as additional utility functions that will serve as a personal toolkit throughout the entire 42 curriculum.


Part 1 — Libc functions : reimplements standard functions from `<string.h>`, `<ctype.h>`, and `<stdlib.h>`, prefixed with `ft_` (e.g., `ft_strlen`, `ft_memcpy`, `ft_atoi`).

Part 2 — Additional functions : provides higher-level utilities not found in the standard library, or present in a different form, such as `ft_split`, `ft_itoa`, `ft_substr`, and file-descriptor output functions like `ft_putstr_fd`.

Part 3 — Linked list functions : implements a generic singly-linked list (`t_list`) with a full set of manipulation functions: creation, insertion, traversal, mapping, and deletion.


## Lib Description

### Data structure

typedef struct s_list
{
    void          	*content;
    struct s_list 	*next;
}					t_list;

### Part 1 — Libc functions

 `ft_isalpha`  Checks if a character is alphabetic 
 `ft_isdigit`  Checks if a character is a digit 
 `ft_isalnum`  Checks if a character is alphanumeric 
 `ft_isascii`  Checks if a character is in the ascii table 
 `ft_isprint`  Checks if a character is printable 
 `ft_strlen`  Returns the length of a string 
 `ft_memset`  Fills a memory area with a given byte (used in calloc to fill with 0)
 `ft_bzero`  Sets a memory area to zero 
 `ft_memcpy`  Copies memory from source to destination (doesn't handle overlapping)
 `ft_memmove`  Copies memory safely (handles overlapping areas) 
 `ft_strlcpy`  Copies a string with size limit 
 `ft_strlcat`  Concatenates a string with size limit 
 `ft_toupper`  Converts a character to uppercase 
 `ft_tolower`  Converts a character to lowercase 
 `ft_strchr`  Finds first occurrence of a character in a string 
 `ft_strrchr`  Finds last occurrence of a character in a string 
 `ft_strncmp`  Compares two strings up to n characters 
 `ft_memchr`  Searches for a byte in a memory area 
 `ft_memcmp`  Compares two memory areas 
 `ft_strnstr`  Finds a substring within a string, up to n chars 
 `ft_atoi`  Converts a string to an integer 
 `ft_calloc`  Allocates and zero-initializes memory 
 `ft_strdup`  Duplicates a string using `malloc` 

### Part 2 — Additional functions

 `ft_substr`  Extracts a substring from a string 
 `ft_strjoin`  Concatenates two strings into a new one 
 `ft_strtrim`  Trims characters from the start and end of a string 
 `ft_split`  Splits a string by a delimiter character 
 `ft_itoa`  Converts an integer to a string 
 `ft_strmapi`  Applies a function to each character, returns new string 
 `ft_striteri`  Applies a function to each character in-place 
 `ft_putchar_fd`  Outputs a character to a file descriptor 
 `ft_putstr_fd`  Outputs a string to a file descriptor 
 `ft_putendl_fd`  Outputs a string followed by a newline to a fd 
 `ft_putnbr_fd`  Outputs an integer to a file descriptor 

### Part 3 — Linked list functions

 `ft_lstnew`  Creates a new list node 
 `ft_lstadd_front`  Adds a node at the front of the list 
 `ft_lstsize`  Returns the number of nodes in the list 
 `ft_lstlast`  Returns the last node of the list 
 `ft_lstadd_back`  Adds a node at the end of the list 
 `ft_lstdelone`  Frees a single node using a delete function 
 `ft_lstclear`  Frees all nodes and sets the list pointer to NULL 
 `ft_lstiter`  Applies a function to each node's content 
 `ft_lstmap`  Creates a new list by applying a function to each node 

## Instructions

### Compilation

`make`

This produces `libft.a` at the root of the repository.


### Linking with your project

`cc -Wall -Wextra -Werror your_file.c libft.a`

You will also need to have the #include "libft.h" as a header in your_file.c


### Makefile rules

 `make` / `make all` / `make libft.a`  Compiles all source files and creates `libft.a` 
 `make clean`  Removes object files (*.o) 
 `make fclean`  Removes object files and `libft.a` 
 `make re`  Runs `fclean` then `all` 


## Resources

- Google (stackOverflow, websites similar to man)
- man