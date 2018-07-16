# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/07/16 19:39:09 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation parameters.
CC		= gcc
CL		= ar rc
CR		= ranlib
CFLAGS	= -Wall -Werror -Wextra

DSRC	= ./srcs
SRC		= *.c
DINC	= ./includes
OUT		= ftlib.a

#--- Default instruction to make the library.
all: $(OUT)
.PHONY: all

#--- Assemble static library. Depends on compiled object files.
$(OUT): $(DSRC)/$(SRC:%.c=%.o)
	$(CL) -v $(OUT) $(DSRC)/$(SRC:%.c=%.o)
	$(CR) $(OUT)

#--- Translate into binary. Depends on assembler code.
$(DSRC)/$(SRC:%.c=%.o): $(DSRC)/$(SRC:%.c=%.s)
	cd $(DSRC) && $(CC) $(CFLAGS) $(SRC:%.c=%.s) -c

#--- Compile into assembler code. Depends on C code.
$(DSRC)/$(SRC:%.c=%.s): $(DSRC)/$(SRC)
	cd $(DSRC) && $(CC) $(CFLAGS) $(SRC) -S

clean:
	@rm -f $(DSRC)/*.s $(DSRC)/*.o

fclean: clean
	@rm -f $(OUT)

re: fclean all