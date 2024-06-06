# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/02 18:34:39 by sfarren           #+#    #+#              #
#    Updated: 2024/06/02 18:46:27 by sfarren          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang
CCFLAGS = -Wall -Wextra -Werror

SRC =

OBJS = $(SRC:.c=.o)

# BONUS_SRC =

# BONUS_OBJS = $(BONUS_SRC:.c=.o)

HEADERS = libftprintf.h

.PHONY: all
all: $(NAME)

# the ar rcs command creates or updates an index in the archive
# r: replace the specified files in the archive
# c: create the archive if it does not exist
# s: write an index for the archive (instead of using ranlib)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# %.o: %.c is a pattern rule that says how to build .o files from .c files
# $< is the first prerequisite, which is the .c file
# $@ is the target, which is the .o file
%.o: %.c $(HEADERS)
	$(CC) $(CCFLAGS) -c $< -o $@

# .PHONY: bonus
# bonus: $(OBJS) $(BONUS_OBJS)
# 	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re:
	$(MAKE) fclean
	$(MAKE) all
