SRCS = arr_clear.c arr_contains.c arr_iterv.c arr_itervv.c arr_find_destroy.c arr_find.c arr_drop.c arr_iter.c arr_set.c ft_v3dot2.c ft_readfile.c ft_v3abs.c arr_absorb.c arr_destroy.c arr_get.c arr_init.c arr_last.c arr_length.c arr_pop.c arr_push.c arr_rabsorb.c arr_rtopsorb.c arr_shift.c arr_sizeup.c arr_start.c arr_top.c arr_topsorb.c arr_unshift.c ft_abs.c ft_atoi.c ft_bzero.c ft_clamp.c ft_clampd.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstaddend.c ft_lstclr.c ft_lstclrsf.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstnuke.c ft_lstpop.c ft_lstpush.c ft_lstshift.c ft_lsttostr.c ft_lstunshift.c ft_m4identity.c ft_m4inverse.c ft_m4multiply.c ft_m4multnum.c ft_m4transpose.c ft_m4xv3.c ft_m4xv4.c ft_m4zero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_power.c ft_powerl.c ft_putbyte.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_puthex.c ft_puthexbyte.c ft_putmem.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_putvar.c ft_queuler.c ft_quinverse.c ft_qumultiply.c ft_qurotation.c ft_qurotmatrix.c ft_realloc.c ft_sqrt.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_swap.c ft_swapd.c ft_tolower.c ft_toupper.c ft_v3add.c ft_v3cross.c ft_v3divnum.c ft_v3dot.c ft_v3euleur.c ft_v3inverse.c ft_v3magnitude.c ft_v3multnum.c ft_v3normalize.c ft_v3rotate.c ft_v3subtract.c ft_v3tov4.c ft_v3tov4point.c ft_v4tov3.c get_next_line.c 
SRCS += $(wildcard *.c)
SRCS += $(wild)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

all: $(OBJS) $(NAME)

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
