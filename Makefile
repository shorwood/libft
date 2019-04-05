# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2019/04/05 06:30:47 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft.a
CC		= gcc -Wall -Werror -Wextra 
AR		= ar rus
DSRC	= src
DINC	= include
DOBJ	= build
DBIN	= lib

#--- Set source project dependencies.
SRC	= $(wildcard $(DSRC)/**/*.c)
OBJ = $(patsubst $(DSRC)/%.c,$(DOBJ)/%.o,$(SRC))
BIN = $(DBIN)/$(NAME)

# **************************************************************************** #

#--- Default instruction to make the library.
all: $(BIN)
 
#--- Compile into an object binary. Depends on source code.
$(DOBJ)/%.o: $(DSRC)/%.c
	@mkdir -p $(dir $@)
	@$(CC) -I $(DINC) $< -o $@ -c
	@echo "• Compiling '$(notdir $<)' into an object '$(notdir $@)'"

#--- Assemble static library. Depends on compiled object binary.
$(BIN): $(OBJ)
	@mkdir -p $(dir $@)
	@$(AR) $@ $? 2> /dev/null
	@echo "• Linking '$(?F)' to the '$(NAME)' library"

# **************************************************************************** #

clean:
	-@rm $(DOBJ)/**/*.o 2> /dev/null || true
	-@rm -r $(DOBJ) 2> /dev/null || true
	@echo "• Deleted object files"

fclean: clean
	@rm -f $(BIN)
	@echo "• Deleted output binary"

re: fclean all

.PHONY: clean fclean all re
