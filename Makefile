SRC = ${addprefix src/, int_hex.c rgb_hex.c rgb_int.c \
		print.c valide.c usage.c ft_split.c} color_utils.c
INC = color_utils.h
NAME = color_utils
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}:
	@${CC} ${CFLAGS} ${SRC} -I ${INC} -o ${NAME}
	@echo "\033[1;32mcolor_utils program compiled successfully!\033[0m"

clean:
	@${RM} ${NAME}
	@echo "\033[1;31mRemoved color_utils program!\033[0m"

usage:
	@echo "Usage"
	@echo "SYNOPSIS"
	@echo "./color_utils [-dr -rd -dh -hd -rh -hr] [<color code>]"
	@echo "Op"

re: clean all
