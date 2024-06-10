# CC = cc
# NAME = so_long
# FLAGS = -Wall -Wextra -Werror
# MLX_FLAGS = -lmlx -L/usr/lib -Imlx_linux -lXext -lX11# -lm -lz
# SOURCES =  so_long.c read_map.c\
# 	checking1_map.c \
# 	checking2_map.c \
# 	./get_next_line/get_next_line.c  \
# 	./get_next_line/get_next_line_utils.c


# all : $(NAME)

# $(NAME) :
# 		$(CC) $(FLAGS) $(MLX_FLAGS) $(SOURCES) -o $(NAME)



# clean :
# 	rm -rf $(OBJECTS)
# fclean : clean
# 		rm -rf $(NAME)
# re : fclean all
# --------------
CC = cc
#LIBFT=libft.a
NAME = so_long
FLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -lmlx -lXext -lX11 -lm 

SOURCES =   so_long.c \
		checking1_map.c \
		checking2_map.c \
		map_window.c \
		./get_next_line/get_next_line.c  \
		./get_next_line/get_next_line_utils.c \
		read_map.c \
   		floodfill.c \
		clean_fcts.c \
		usedfcts.c  

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) :$(OBJECTS)  libft/libft.a
	$(CC) $(FLAGS) $^ $(MLX_FLAGS) -o $@
    
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@	

libft/libft.a:
	@(make -C libft)
clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

