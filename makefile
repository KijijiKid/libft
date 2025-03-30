NAME=libft.a

CC=cc
INCDIRS=-I.
CFLAGS=-Wall -Werror -Wextra -g $(INCDIRS)
AR = ar rcs

CFILES= $(addsuffix .c, ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr ft_strdup ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstiter) 
OBJECTS= $(addsuffix .o, ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr ft_strdup ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstiter)

all: $(NAME)

$(NAME):$(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

re: fclean $(NAME)
	@echo 
	@echo "Rebuilding"
	@echo

clean:
	@echo 
	@echo "Removing all executables!"
	@echo
	rm -rf $(NAME) $(OBJECTS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean re