# 42 - Libft
42's second project - Creation of our own C library.
## Subject
Libft [subject](https://github.com/bclaudios/42-Libft/blob/master/libft.en.pdf)
## Grade
125/100 ✅ (11-19-2018)
## Languages
- C
- "Makefile"
## Usage
``` 
cd ./library
make          // Compile the library
make clean    // Delete all .o files
make fclean   // Delete all .o files and the compiled library
make re       // make fclean && make
```
## Functions List
### Libc functions:
- `memset()`
- `bzero()`
- `memcpy()`
- `memccpy()`
- `memmove()`
- `memchr()`
- `memcmp()`
- `strlen()`
- `strdup()`
- `strcpy()`
- `strncpy()`
- `strcat()`
- `strncat()`
- `strlcat()`
- `strchr()`
- `strrchr()`
- `strstr()`
- `strnstr()`
- `strcmp()`
- `strncmp()`
- `atoi()`
- `isalpha()`
- `isdigit()`
- `isalnum()`
- `isascii()`
- `isprint()`
- `toupper()`
- `tolower()`
### Additional functions:
- `void * ft_memalloc(size_t size)` - *Allocates (with `malloc(3)`) and returns a “fresh” memory area. The memory allocated is initialized to `0`. If the allocation fails, the function returns `NULL`.*

- `void ft_memdel(void **ap)` - *Takes as a parameter the address of a memory area that needs to be freed with `free(3)`, then puts the pointer to `NULL`.*

- `char * ft_strnew(size_t size)` - *Allocates (with `malloc(3)`) and returns a “fresh” string ending with `\0`. Each character of the string is initialized at `\0`. If the allocation fails the function returns `NULL`.*

- `void ft_strdel(char **as)` - *Takes as a parameter the address of a string that need to be freed with `free(3)`, then sets its pointer to `NULL`.*

- `void ft_strclr(char *s)` - *Sets every character of the string to the value `\0`.*

- `void ft_striter(char *s, void (*f)(char *))` - *Applies the function `f` to each character of the string passed as argument. Each character is passed by address to `f` to be modified if necessary.*

- `void ft_striteri(char *s, void (*f)(unsigned int, char *))` - *Applies the function `f` to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to `f` to be modified if necessary.*

- `char * ft_strmap(char const *s, char (*f)(char))` - *Applies the function `f` to each character of the string given as argument to create a “fresh” new string (with `malloc(3)`) resulting from the successive applications of `f`.*

- `char * ft_strmapi(char const *s, char (*f)(unsigned int, char))` - *Applies the function `f` to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with `malloc(3)`) resulting from the successive applications of `f`.*

- `int ft_strequ(char const *s1, char const *s2)` - *Lexicographical comparison between `s1` and `s2`.  If the 2 strings are identical the function returns `1`, or `0` otherwise.*

- `int ft_strnequ(char const *s1, char const *s2, size_t n)` - *Lexicographical comparison between `s1` and `s2` up to `n` characters or until a `\0` is reached. If the 2 strings are identical, the function returns `1`, or `0` otherwise.*

- `char * ft_strsub(char const *s, unsigned int start, size_t len)` - *Allocates (with `malloc(3)`) and returns a “fresh” substring from the string given as argument. The substring begins at index `start` and is of size `len`. If `start` and `len` aren’t refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns `NULL`.*

- `char * ft_strjoin(char const *s1, char const *s2)` - *Allocates (with `malloc(3)`) and returns a “fresh” string ending with `\0`, result of the concatenation of `s1` and `s2`. If the allocation fails the function returns `NULL`.

- `char * ft_strtrim(char const *s)` - *Allocates (with `malloc(3)`) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ` `, `\n` and `\t`. If `s` has no whitespaces at the beginning or at the end, the function returns a copy of `s`. If the allocation fails the function returns `NULL`.*

- `char ** ft_strsplit(char const *s, char c)` - *Allocates (with `malloc(3)`) and returns an array of “fresh” strings (all ending with `\0`, including the array itself) obtained by spliting `s` using the character `c` as a delimiter. If the allocation fails the function returns `NULL`. Example: `ft_strsplit("*hello*fellow***students*", ’*’)` returns the array `["hello", "fellow", "students"]`.*

- `char * ft_itoa(int n)` - *Allocate (with `malloc(3)`) and returns a “fresh” string ending with `\0` representing the integer `n` given as argument. Negative numbers must be supported. If the allocation fails, the function returns `NULL`.*

- `void ft_putchar(char c)` - *Outputs the character `c` to the standard output.*

- `void ft_putstr(char const *s)` - *Outputs the string `s` to the standard output.*

- `void ft_putendl(char const *s)` - *Outputs the string `s` to the standard output followed by a `\n`.*

- `void ft_putnbr(int n)` - *Outputs the integer `n` to the standard output.*

- `void ft_putchar_fd(char c, int fd)` - *Outputs the char `c` to the file descriptor `fd`.*

- `void ft_putstr_fd(char const *s, int fd)` - *Outputs the string `s` to the file descriptor `fd`.*

- `void ft_putendl_fd(char const *s, int fd)` - *Outputs the string `s` to the file descriptor `fd` followed by a `\n`.*

- `void ft_putnbr_fd(int n, int fd)` - *Outputs the integer `n` to the file descriptor `fd`.*

### Bonus Functions
- `t_list * ft_lstnew(void const *content, size_t content_size)` - *Allocates (with `malloc(3)`) and returns a “fresh” link. The variables `content` and `content_size` of the new link are initialized by copy of the parameters of the function. If the parameter `content` is nul, the variable `content` is initialized to `NULL` and the variable `content_size` is initialized to `0` even if the parameter `content_size` isn’t.  The variable `next` is initialized to `NULL`. If the allocation fails, the function returns `NULL`.*

- `void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))` - *Takes as a parameter a link’s pointer address and frees the memory of the link’s content using the function `del` given as a parameter, then frees the link’s memory using `free(3)`. The memory of `next` must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to `NULL` (quite similar to the function `ft_memdel` in the mandatory part).*

- `void ft_lstdel(t_list **alst, void (*del)(void *, size_t))` - *Takes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions `del` and `free(3)`. Finally the pointer to the link that was just freed must be set to `NULL` (quite similar to the function `ft_memdel` from the mandatory part).*

- `void ft_lstadd(t_list **alst, t_list *new)` - *Adds the element `new` at the beginning of the list.*

- `void ft_lstiter(t_list *lst, void (*f)(t_list *elem))` - *Iterates the list `lst` and applies the function `f` to each link.*

- `t_list *  ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))` - *Iterates a list `lst` and applies the function `f` to each link to create a “fresh” list (using `malloc(3)`) resulting from the successive applications of `f`. If the allocation fails, the function returns `NULL`.*

### My Bonus Functions
- `int ft_charequ(char a, char b)`
- `int ft_min(int a, int b)`
- `int ft_max(int a, int b)`
- `void	ft_swap(int *a, int *b)`
- `void	*ft_realloc(void *ptr, size_t initsize, size_t size)`
