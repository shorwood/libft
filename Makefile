# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/07/17 00:17:53 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation parameters.
CC		= gcc
CL		= ar rc
CR		= ranlib
CFLAGS	= -Wall -Werror -Wextra

#--- Initialize input and outputs.
DSRC	= srcs
DINC	= includes
OUT		= ftlib.a

#--- Prepare arguments for dependencies.
SRC		= $(wildcard $(DSRC)/*.c)
OBJ		= $(SRC:%.c=%.o)
ASM		= $(SRC:%.c=%.s)

#--- Default instruction to make the library.
all: $(OUT)
.PHONY: all

#--- Assemble static library. Depends on compiled object files.
$(OUT): $(OBJ)
	$(CL) -v $(OUT) $^
	$(CR) $(OUT)

#--- Compile into assembler code. Depends on C code.
$(OBJ): $(ASM)
	$(CC) $(CFLAGS) $< -o $@ -c

#--- Compile into assembler code. Depends on C code.
$(ASM): $(SRC)
	$(CC) $(CFLAGS) -I$(DINC) $< -o $@ -S

clean:
	@rm -f $(OBJ) $(ASM)

fclean: clean
	@rm -f $(OUT)

re: fclean all
