# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 12:26:44 by shorwood     #+#   ##    ##    #+#        #
#    Updated: 2019/04/17 07:32:34 by shorwood    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#--- Initialize compilation/linkeage parameters.
BIN		= libft
DSRC	= src
DINC	= include
DOBJ	= build
DBIN	= bin
CFLAGS	= -Wall -Werror -Wextra
LDFLAGS	= 

#--- Set source project dependencies.
SRC	= $(wildcard $(DSRC)/*.c)\
	  $(wildcard $(DSRC)/*/*.c)
INC	= $(wildcard $(DINC)/*.h)\
	  $(wildcard $(DINC)/*/*.h)
OBJ = $(patsubst %.c,$(DOBJ)/%.o,$(SRC))

# **************************************************************************** #

#--- Default instruction to make the library.
$(BIN): $(DBIN)/$(BIN).a $(DBIN)/$(BIN).h

#--- Combine all header files into a single one.
$(DBIN)/$(BIN).h: $(filter-out $(DINC)/$(BIN).h, $(INC))
	@sed -e '/^# include \"/d;' $(DINC)/$(BIN).h >> $@
	@sed -e '/^# include/d;/^\/\* \*/d;/^\/\*   /d;' $^ >> $@
	@echo "\r\033[K• Header '$(notdir $@)' generated"

#--- Assemble into a static library. Depends on compiled object binary.
$(DBIN)/$(BIN).a: $(OBJ)
	@mkdir -p $(dir $@)
	@ar rus $@ $? 2> /dev/null
	@echo "\r\033[K• Library '$(notdir $@)' compiled"
 
#--- Compile into an object binary. Depends on source code.
$(DOBJ)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I$(DINC) $< -o $@ -c
	@printf "\r\033[K• Compiled '$<'"

# **************************************************************************** #

clean:
	-@rm $(DOBJ)/**/*.o 2> /dev/null || true
	-@rm -r $(DOBJ) 2> /dev/null || true
	@printf "\r\033[K• Deleted object files"

fclean: clean
	@rm -f $(BIN)
	@printf "\r\033[K• Deleted build and object files"

re: fclean all
	@make

.PHONY: clean fclean all re
