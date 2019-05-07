# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2019/04/30 07:11:30 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft
DSRC	= src
DINC	= include
DBLD	= build
DBIN	= bin
DLIB	= lib
CFLAGS	= -Wall -Werror -Wextra
IFLAGS	= -I$(DINC)
LDFLAGS	= 

#--- Set source project dependencies.
SRC		= $(wildcard $(DSRC)/*/*.c)
INC		= $(wildcard $(DINC)/*.h)
BLD 	= $(patsubst $(DSRC)/%.c,$(DBLD)/%.o,$(SRC))

# **************************************************************************** #

all: $(NAME)

#--- Default instruction to make the library.
$(NAME): $(DLIB)/$(NAME).a $(INC)

#--- Assemble into a static library. Depends on compiled object binary.
$(DLIB)/$(NAME).a: $(BLD)
	@mkdir -p $(dir $@)
	@ar rus $@ $? 2> /dev/null
	@echo "\r\033[K• Library '$(notdir $@)' compiled"
 
#--- Compile into an object binary. Depends on source code.
$(DBLD)/%.o: $(DSRC)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(LDFLAGS) $(IFLAGS) $< -o $@ -c
	@printf "\r\033[K• Compiled '$<'"

# **************************************************************************** #

test: $(NAME)
	make -C test

# **************************************************************************** #

clean:
	-@rm $(DBLD)/**/*.o 2> /dev/null || true
	-@rm -r $(DBLD) 2> /dev/null || true
	@echo "• Deleted '$(NAME)' object files"

fclean: clean
	@rm -f $(DBIN)/$(NAME)
	@rm -f $(DLIB)/$(NAME)
	@rm -r $(DBIN) 2> /dev/null || true
	@rm -r $(DLIB) 2> /dev/null || true
	@echo "• Deleted '$(NAME)' library & binaries"

re: fclean all

.PHONY: clean fclean all re
