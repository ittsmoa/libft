# libft

## Project Description
**libft** is a foundational C library project from the 42 curriculum.  
The goal of this project is to recreate a set of standard C library functions, as well as implement additional utility functions that will be reused in future projects.  
By completing libft, the student gains a deep understanding of low-level programming concepts such as memory management, pointers, strings, arrays, and linked lists.

---

## Project Objectives
- Understand how standard C library functions work internally  
- Improve skills in memory allocation and manipulation  
- Practice writing clean, reusable, and well-structured C code  
- Build a personal C library to use in upcoming projects  

---

## Library Content
The library is divided into several parts:

### Part 1: Libc Functions
Reimplementation of standard C library functions.

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

---

### Part 2: Additional Functions
Utility functions not included in the standard C library.

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

### Bonus Part: Linked List Functions
Functions for manipulating singly linked lists.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## Compilation
The library is compiled using a Makefile.

- `make`  
- `make clean`  
- `make fclean`  
- `make re`  

This will generate a static library file:  
`libft.a`

---

## Usage
To use the library in another project:
1. Include the header file:
   ```c
   #include "libft.h"
