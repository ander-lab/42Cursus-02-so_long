# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 15:26:16 by ajimenez          #+#    #+#              #
#    Updated: 2021/12/23 13:06:17 by ajimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
MLXFLGS = -framework OpenGL -framework AppKit
SAN		= -fsanitize=address
LIB 	= ar -rcs
RM		= /bin/rm -rf

LIBFT	= ./includes/libft/libft.a
LIBMLX	= ./includes/mlx/libmlx.a
LIBP	= so_long.a 

NAME 	= so_long

MAP = 	 srcs/map/get_map.c srcs/map/map_checker.c srcs/map/map_errors.c \
		 srcs/map/map_check_utils.c srcs/map/map_is_closed.c \
		 srcs/map/map_elements.c

MLX =   srcs/game/init_utils.c srcs/game/game.c srcs/game/ft_print_map.c \
		 srcs/game/key_parser.c

SRCS	= srcs/main.c $(MAP) $(MLX)

OBJS	= $(SRCS:.c=.o)
COMP	= $(CC) $(CFLAGS) $(SRCS) $(LIBFT) $(LIBMLX) $(MLXFLGS) -o $(NAME)
SANCOMP	= $(CC) $(CFLAGS) $(SAN) $(LIBFT) $(LIBP) $(SRCS) $(LIBMLX) $(MLXFLGS) -g3 -o $(NAME)

all: 		$(NAME)

$(NAME):			$(OBJS)
					@echo "\n\033[33mMaking libft! ░░░░░░ /(._.)\ ░░░░░\033[39m\n"
					@make -sC ./includes/libft
					@make -sC ./includes/mlx
					@cp ./includes/mlx/libmlx.a ./
					@cp ./includes/libft/libft.a ./
					$(LIB) $(LIBP) $(OBJS)
					$(COMP) 
					@echo "\n\033[1;32mEverything done! ░░░░░░ ＼(>o<)ノ ░░░░░\033[39m\n"

fsanitize:			$(OBJS)
					@echo "\n\033[33mMaking libft! ░░░░░░ /(ಠ_ಠ)\ ░░░░░\033[39m\n"
					@make -sC ./includes/libft
					@make -C ./includes/mlx
					@cp ./includes/mlx/libmlx.a ./
					@cp ./includes/libft/libft.a ./
					$(LIB) $(LIBP) $(OBJS)
					$(SANCOMP)
					@echo "\n\033[1;32mEverything done! ░░░░░░ ＼(>o<)ノ ░░░░░\033[39m\n"

clean:
					@make clean -sC ./includes/libft
					$(RM) $(OBJS) $(OBJS_B)
					@rm libft.a libmlx.a

fclean: 	clean
					@make fclean -sC ./includes/libft
					$(RM) $(NAME)
					$(RM) $(PROG)
					$(RM) $(LIBP)
					@echo "\n\033[31mEverything fcleaned! ░░░░░░ ٩(╬ʘ益ʘ╬)۶ ░░░░░\n\033[39m"

re:			fclean all

.PHONY: all clean fclean re
 
