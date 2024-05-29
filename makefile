NAME = libft.a

SOURCE = *.c

OBJS = *.o
# OBJS = \
#         ft_isalpha.o\
#         ft_isdigit.o\
#         ft_isalnum.o\
#         ft_isascii.o\
#         ft_isprint.o\
#         ft_strlen.o\
#         ft_memset.o\
#         ft_bzero.o\
#         ft_memcpy.o\
#         ft_memmove.o\
#         ft_strlcpy.o\
#         ft_strlcat.o\
#         ft_toupper.o\
#         ft_tolower.o\
#         ft_strchr.o\
#         ft_strrchr.o\
#         ft_strncmp.o\
#         ft_memchr.o\
#         ft_memcmp.o\
#         ft_strnstr.o\
#         ft_atoi.o\
#         ft_calloc.o\
#         ft_strdup.o
CC = cc -Wall -Wextra -Werror
all: $(NAME)
$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)
$(OBJS):$(SOURCE)
	$(CC) -c $(SOURCE)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all
.PHONY:all clean fclean re



# NAME = libft.a

# SOURCE = \
#         ft_isalpha.c\
#         ft_isdigit.c\
#         ft_isalnum.c\
#         ft_isascii.c\
#         ft_isprint.c\
#         ft_strlen.c\
#         ft_memset.c\
#         ft_bzero.c\
#         ft_memcpy.c\
#         ft_memmove.c\
#         ft_strlcpy.c\
#         ft_strlcat.c\
#         ft_toupper.c\
#         ft_tolower.c\
#         ft_strchr.c\
#         ft_strrchr.c\
#         ft_strncmp.c\
#         ft_memchr.c\
#         ft_memcmp.c\
#         ft_strnstr.c\
#         ft_atoi.c\
#         ft_calloc.c\
#         ft_strdup.c
# CC = cc -Wall -Wextra -Werror
# all: $(NAME)
# $(NAME):$(SOURCE:%.c=%.o)
#     ar rcs $(NAME) $(SOURCE:%.c=%.o)
# $(SOURCE:%.c=%.o):$(SOURCE)
#     $(CC) -c $(SOURCE)
# clean:
#     rm -f $(SOURCE:%.c=%.o)
# fclean:clean
#     rm -f $(NAME)
# re:fclean all
# .PHONY:all clean fclean re