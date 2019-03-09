# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2019/03/09 15:33:52 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft.a
CC		= gcc -Wall -Werror -Wextra 
AR		= ar rus
DSRC	= src
DINC	= includes
DOBJ	= build
DBIN	= .
DASM	= asm

#--- Set source project dependencies.
SRC	= $(wildcard $(DSRC)/*.c)
OBJ = $(patsubst $(DSRC)/%.c,$(DOBJ)/%.o,$(SRC))
ASM = $(patsubst $(DSRC)/%.c,$(DASM)/%.s,$(SRC))
BIN = $(DBIN)/$(NAME)

# **************************************************************************** #

#--- Default instruction to make the library.
all: $(BIN)
 
#--- Compile into an object binary. Depends on source code.
$(DOBJ)/%.o: $(DSRC)/%.c
	@mkdir -p $(DOBJ)
	@$(CC) -I $(DINC) $< -o $@ -c
	@echo "• Compiling '$(<F)' into an object"

#--- Assemble static library. Depends on compiled object binary.
$(BIN): $(OBJ)
	@mkdir -p $(DBIN)
	@$(AR) $@ $?
	@echo "• Linking '$(?F)' to the '$(NAME)' library"

# **************************************************************************** #

#--- Compile all the functions into asm for reviewing.
asm: $(ASM)

#--- Compile into assembler code. Depends on source code.
$(DASM)/%.s: $(DSRC)/%.c
	@mkdir -p $(DASM)
	@$(CC) -I $(DINC) $(F<) -o $@ -S
	@echo "• Compiling '$(<F)'  to assembler code"

# **************************************************************************** #

clean:
	@rm -rf $(OBJ) $(ASM)
	@echo "• Deleted objects and assembler codes"

fclean: clean
	@rm -f $(BIN)
	@echo "• Deleted output binary and/or library"

re: fclean all

.PHONY: clean fclean all re
