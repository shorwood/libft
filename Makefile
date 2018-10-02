# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/10/01 21:20:42 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft.a
DSRC	= src
DINC	= .
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
LC		= ar
LFLAGS	= rus
LR		= ranlib

#--- Set source project dependencies.
SRC	= $(wildcard $(DSRC)/*.c $(DSRC)/*.cc)

# **************************************************************************** #

#--- Default instruction to make the library.
deploy: $(NAME)
	
#--- Default instruction to make the library.
all: $(NAME)

# **************************************************************************** #

#--- Pull C files from the defined pool.
%.c: $(SRC)

#--- Translate into object binary. Depends on assembler code.
%.o: %.c
	@$(CC) $(CFLAGS) -I$(DINC) $< -o $@ -c
	@echo "- Translating $< to object"

#--- Assemble static library. Depends on compiled object binary.
$(NAME): $(SRC:%.c=%.o)
	@$(LC) $(LFLAGS) $@ $^
	@echo "- Library(ing) $@"

# **************************************************************************** #

clean:
	@rm -f **/*.o **/*.s
	@echo "- Deleted objects$<"

fclean: clean
	@rm -f $(NAME)
	@echo "- Deleted output"

re: fclean all

.PHONY: clean fclean all re