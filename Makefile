# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/10/17 17:38:48 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft.a
DSRC	= .
DINC	= .
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
LC		= ar
LFLAGS	= rus
LR		= ranlib

#--- Set source project dependencies.
#SRC	= $(wildcard $(DSRC)/*.c)
SRC		= ft_atoi.c 	ft_atol.c 		ft_atoll.c \
		ft_bzero.c 		ft_calloc.c 	ft_isalnum.c \
		ft_isalpha.c 	ft_isascii.c 	ft_isblank.c \
		ft_iscntrl.c 	ft_isdigit.c 	ft_isgraph.c \
		ft_islower.c 	ft_isprint.c 	ft_ispunct.c \
		ft_isspace.c 	ft_isupper.c 	ft_isxdigit.c \
		ft_itoa.c 		ft_lstadd.c 	ft_lstdel.c \
		ft_lstdelone.c 	ft_lstiter.c 	ft_lstmap.c \
		ft_lstnew.c 	ft_lstpush.c 	ft_malloc.c \
		ft_memalloc.c 	ft_memccpy.c 	ft_memchr.c \
		ft_memcmp.c 	ft_memcpy.c 	ft_memdel.c \
		ft_memmove.c 	ft_memset.c 	ft_pow.c \
		ft_pow10.c 		ft_putchar_fd.c ft_putchar.c \
		ft_putendl_fd.c ft_putendl.c 	ft_putnbr_fd.c \
		ft_putnbr.c 	ft_putstr_fd.c 	ft_putstr.c \
		ft_realloc.c 	ft_strcat.c		ft_strchr.c \
		ft_strclr.c 	ft_strcmp.c 	ft_strcpy.c \
		ft_strdel.c 	ft_strdup.c 	ft_strequ.c \
		ft_striter.c 	ft_striteri.c 	ft_strjoin.c \
		ft_strlcat.c 	ft_strlen.c 	ft_strmap.c \
		ft_strmapi.c 	ft_strncat.c 	ft_strncmp.c \
		ft_strncpy.c 	ft_strndup.c 	ft_strnequ.c \
		ft_strnew.c 	ft_strnstr.c 	ft_strrchr.c \
		ft_strrev.c 	ft_strsplit.c 	ft_strstr.c \
		ft_strsub.c 	ft_strtrim.c 	ft_tolower.c \
		ft_toupper.c

# **************************************************************************** #

#--- Default instruction to make the library.
all: $(NAME)

#--- Default instruction to make the library.
deploy: all clean

# **************************************************************************** #

#--- Pull C files from the defined pool.
%.c: $(SRC)

#--- Compile into assembler code. Depends on source code.
%.s: %.c
	@$(CC) $(CFLAGS) -I$(DINC) $< -o $@ -S
	@echo "- Compiling $< into an assembler code"

#--- Compile into an object binary. Depends on source code.
%.o: %.c
	@$(CC) $(CFLAGS) -I$(DINC) $< -o $@ -c
	@echo "- Compiling $< into an object file"

#--- Assemble static library. Depends on compiled object binary.
$(NAME): $(SRC:%.c=%.o)
	@$(LC) $(LFLAGS) $@ $^

# **************************************************************************** #

clean:
	@rm -f $(DSRC)/*.o $(DSRC)/*.s
	@echo "- Deleted objects"

fclean: clean
	@rm -f $(NAME)
	@echo "- Deleted output"

re: fclean all

.PHONY: clean fclean all re