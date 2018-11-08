# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/11/08 16:10:14 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft.a
CC		= gcc -Wall -Werror -Wextra 
AR		= ar rus
DOBJ	= build
DINC	= -I includes
DASM	= asm
DSRC	= .

#--- Set source project dependencies.
SRC	= $(wildcard *.c)
OBJ	= $(SRC:%.c=$(DOBJ)/%.o)
ASM	= $(SRC:%.c=$(DASM)/%.s)

# **************************************************************************** #

#--- Default instruction to make the library.
all: $(NAME)

#--- Pull C files from the defined pool.
%.c: $(SRC)

# **************************************************************************** #

#--- Compile all the functions into asm for reviewing.
asm: $(ASM)

#--- Compile into assembler code. Depends on source code.
$(DASM)/%.s: %.c
	@$(CC) $(DINC) $< -o $@ -S
	@echo "• Compiling $< into assembler code"

# **************************************************************************** #

#--- Compile into an object binary. Depends on source code.
$(DOBJ)/%.o: %.c
	@mkdir -p $(DOBJ)
	@$(CC) $(DINC) $< -o $@ -c
	@echo "• Compiling $< into an object"

#--- Assemble static library. Depends on compiled object binary.
$(NAME): $(OBJ)
	@mkdir -p $(DASM)
	@$(AR) $@ $?
	@echo "• Linking $(notdir $?) to the $(NAME) library"

# **************************************************************************** #

clean:
	@rm -f $(OBJ) $(ASM)
	@echo "• Deleted objects and assembler codes"

fclean: clean
	@rm -f $(NAME)
	@echo "• Deleted output binary and/or library"

re: fclean all

.PHONY: clean fclean all re
