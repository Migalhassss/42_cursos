Library	= libft

Files	=

Compiler	= gcc

Flags	= -Wall -Wextra -Werror

OUT	= $(Library).a

C	= $(files:%=%.c)

OBJ	= $(files:%=%.o)

NAME	= $(OUT)

$(NAME):
	$(Compiler) $(Flags) -c $(C) -I./
	ar -rc $(OUT) $(OBJ)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all, clean, fclean, re