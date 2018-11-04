# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/11/04 04:13:19 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft.a
CC		= gcc -Wall -Werror -Wextra 
AR		= ar rus

#--- Set source project dependencies.
SRC	= $(wildcard *.c)

# **************************************************************************** #

#--- Default instruction to make the library.
all: $(NAME)

#--- Pull C files from the defined pool.
%.c: $(SRC)

#--- Compile into assembler code. Depends on source code.
%.s: %.c
	@$(CC) $< -o $@ -S -O3
	@echo "• Compiling $< into assembler code"

#--- Compile into an object binary. Depends on source code.
%.o: %.c
	@$(CC) $< -o $@ -c
	@echo "• Compiling $< into an object"

#--- Assemble static library. Depends on compiled object binary.
$(NAME): $(SRC:%.c=%.o)
	@$(AR) $@ $?
	@echo "• Linking $? to the $(NAME) library"

# **************************************************************************** #

clean:
	@rm -f *.o *.s
	@echo "• Deleted objects"

fclean: clean
	@rm -f $(NAME)
	@echo "• Deleted output"

re: fclean all

.PHONY: clean fclean all re
