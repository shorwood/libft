# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/10/29 18:50:42 by shorwood    ###    #+. /#+    ###.fr      #
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
SRC	= $(wildcard $(DSRC)/*.c)

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
	$(LC) $(LFLAGS) $@ $?
# **************************************************************************** #

clean:
	@rm -f $(DSRC)/*.o $(DSRC)/*.s
	@echo "- Deleted objects"

fclean: clean
	@rm -f $(NAME)
	@echo "- Deleted output"

re: fclean all

.PHONY: clean fclean all re