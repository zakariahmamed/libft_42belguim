# Libft

A personal C library developed as part of the **42 curriculum**. This project recreates a selection of standard C library functions and adds utilities for strings, file descriptors, and singly linked lists.

The goal is to build a reusable library while strengthening understanding of pointers, memory allocation, data structures, and C programming fundamentals.

## Features

The library contains **43 functions**, organized into three groups.

### Part 1 — Libc functions

| Category | Functions |
| --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi`, `ft_toupper`, `ft_tolower` |

### Part 2 — Additional functions

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Linked list functions

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

> In this project's subject version, the linked list functions are included in the required implementation.

## Build

The project produces a static library named `libft.a`.

```sh
make          # Build libft.a
make bonus    # Also builds libft.a (compatibility target)
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild the library
```

## Usage

Include `libft.h` in your C program, then link the static library when compiling:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

The `main.c` file in this example is your own test or application file; it is not part of the library.

## Testing

- All submitted source files passed **Norminette** in the latest local check.
- The latest local **Francinette** run reported **40 passing functions out of 43**.
- The remaining functions requiring investigation are `ft_memcpy`, `ft_memmove`, and `ft_calloc`.
- All nine linked list functions passed the reported Francinette tests.

These results describe a local development snapshot, not a guarantee of final evaluation success. Re-run tests after making changes.

## What I learned

- Working with pointers and pointer arithmetic
- Allocating and freeing memory safely
- Manipulating strings and memory buffers
- Building and traversing singly linked lists
- Creating and linking a static C library
- Writing code that follows the 42 Norm

## Author

**zahmamed** — 42 student
