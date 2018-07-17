# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2018/07/17 18:16:59 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
DSRC	= srcs
DINC	= includes
OUT		= ftlib.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
LC		= ar
LFLAGS	= rus
LR		= ranlib

#--- Set source project dependencies.
SRC	= $(wildcard $(DSRC)/*.c $(DSRC)/*.cc)

# **************************************************************************** #

#--- Default instruction to make the library.
deploy: $(OUT)
	
#--- Default instruction to make the library.
all: $(OUT)

# **************************************************************************** #

#--- Pull C files from the defined pool.
%.c: $(SRC)

#--- Translate into object binary. Depends on assembler code.
%.o: %.c
	@$(CC) $(CFLAGS) -I$(DINC) $< -o $@ -c
	@echo "- Translating $< to object"

#--- Assemble static library. Depends on compiled object binary.
$(OUT): $(SRC:%.c=%.o)
	@$(LC) $(LFLAGS) $@ $^
	@echo "- Library(ing) $@"

# **************************************************************************** #

clean:
	@rm -f **/*.o **/*.s
	@echo "- Deleted objects$<"

fclean: clean
	@rm -f $(OUT)
	@echo "- Deleted output"

re: fclean all