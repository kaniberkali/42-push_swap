NAME = library/libft/libft.a
CC = gcc -g -Wall -Wextra -Werror
LIBFT = library/libft
PRINTF = library/ft_printf/libftprintf.a
PUSH_SWAP = push_swap
SRCS = source/*.c
UTILS = utils/*.c

all: $(NAME) $(PRINTF) $(PUSH_SWAP)

$(PUSH_SWAP) : $(NAME) $(PRINTF) $(SRCS) $(UTILS)
	$(CC) $(FLAGS) $(NAME) $(PRINTF) $(SRCS) $(UTILS) -o $(PUSH_SWAP)
	@echo "FINISH"

$(NAME):
	make -C $(LIBFT)
	@echo "\nLibft Done!!"

$(PRINTF): 
	make -C library/ft_printf
	@echo "\nft_printf Done!!"

norm:
	norminette $(LIBFT) library/ft_printf source

clean:
	make clean -C $(LIBFT)
	make clean -C library/ft_printf
	rm -rf $(PUSH_SWAP)

fclean: clean
	make fclean -C $(LIBFT)
	make fclean -C library/ft_printf
	rm -rf $(PUSH_SWAP)

re: fclean all

.PHONY: clean re fclean all
