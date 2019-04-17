# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2019/04/17 10:34:48 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
NAME	= libft
DSRC	= src
DINC	= include
DOBJ	= build
DBIN	= .
CFLAGS	= -Wall -Werror -Wextra
LDFLAGS	= 

#--- Set source project dependencies.
SRC	= $(wildcard $(DSRC)/*.c)\
	  $(wildcard $(DSRC)/*/*.c)
INC	= $(wildcard $(DINC)/*.h)\
	  $(wildcard $(DINC)/*/*.h)
OBJ = $(patsubst $(DSRC)/%.c,$(DOBJ)/%.o,$(SRC))

# **************************************************************************** #

all: $(NAME)

#--- Default instruction to make the library.
$(NAME): $(DBIN)/$(NAME).a $(DBIN)/$(NAME).h

#--- Combine all header files into a single one.
$(DBIN)/$(NAME).h: $(filter-out $(DINC)/$(NAME).h, $(INC))
	@sed -e '/^# include \"/d;' $(DINC)/$(NAME).h >> $@
	@sed -e '/^# include/d;/^\/\* \*/d;/^\/\*   /d;' $^ >> $@
	@echo "\r\033[K• Header '$(notdir $@)' generated"

#--- Assemble into a static library. Depends on compiled object binary.
$(DBIN)/$(NAME).a: $(OBJ)
	@mkdir -p $(dir $@)
	@ar rus $@ $? 2> /dev/null
	@echo "\r\033[K• Library '$(notdir $@)' compiled"
 
#--- Compile into an object binary. Depends on source code.
$(DOBJ)/%.o: $(DSRC)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(LDFLAGS) -I$(DINC) $< -o $@ -c
	@printf "\r\033[K• Compiled '$<'"

# **************************************************************************** #

clean:
	-@rm $(DOBJ)/**/*.o 2> /dev/null || true
	-@rm -r $(DOBJ) 2> /dev/null || true
	@printf "\r\033[K• Deleted object files"

fclean: clean
	@rm -f $(DBIN)/$(NAME).a
	@rm -f $(DBIN)/$(NAME).h
	@rm -r $(DBIN) 2> /dev/null || true
	@printf "\r\033[K• Deleted build and object files"

re: fclean all

.PHONY: clean fclean all re
