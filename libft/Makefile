CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c
BRC = ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstmap.c 
OBJ = $(SRC:.c=.o) $(BRC:.c=.o)
NAME = libft.a


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJ}
	${AR} rcs ${NAME} ${OBJ}
	${RM} ${OBJ}

all:		$(NAME)

clean:
	${RM} ${OBJ}

fclean:		clean
	${RM} $(NAME)

bonus: $(BRC) $(BRC)
	$(AR) -r $(NAME) $?

re:			fclean all




.PHONY: clean fclean all re bonus