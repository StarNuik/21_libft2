SRCS += $(wildcard src/ft/*.c)
SRCS += $(wildcard src/mat4/*.c)
SRCS += $(wildcard src/quat/*.c)
SRCS += $(wildcard src/string/*.c)
SRCS += $(wildcard src/vec3/*.c)
SRCS += $(wildcard src/vec4/*.c)
SRCS += $(wildcard src/vector/*.c)
SRCS += $(wildcard src/math/*.c)

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)
FLAGS = -Wall -Wextra -Werror
NAME = libft2.a

INCL += -I .

all: $(NAME)

-include $(DEPS)

%.o: %.c
	@echo "F: $<"
	@gcc $(FLAGS) -MMD -MP -c $< -o $@ $(INCL)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
