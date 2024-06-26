SRCS = 	src/has_opt.c \
	src/has_opt_value.c \
	src/print_base10.c \
	src/stu_atoi.c \
	src/stu_puts.c \
	src/stu_strchr.c \
	src/stu_strcmp.c \
	src/stu_strcpy.c \
	src/stu_strdup.c \
	src/stu_strlen.c \
	src/memcpy.c \
	src/memmove.c \
	src/memset.c \
	src/arrset.c \
	src/print_base.c \
	src/print_str.c \
	src/print_char.c \
	src/print_int.c \
	src/print_int_sign.c \
	src/print_hexa.c \
	src/print_bin.c \
	src/print_oct.c \
	src/print_ptr.c \
	src/print_percent.c \
	src/dprintf.c

TEST = 	test/has_opt.c \
	test/has_opt_value.c \
	test/print_base10.c \
	test/stu_atoi.c \
	test/stu_puts.c \
	test/stu_strchr.c \
	test/stu_strcmp.c \
	test/stu_strcpy.c \
	test/stu_strdup.c \
	test/stu_strlen.c

OBJS = $(SRCS:.c=.o)

TESTOBJS = $(SRCS:.c=.o) $(TEST:.c=.o)

CFLAGS = -Wall -Wextra -Werror -Iinclude

all: libstu.a

ut.out:$(TESTOBJS)
	gcc -lcriterion -o ut.out $(TESTOBJS)

libstu.a:$(OBJS)
	ar rc libstu.a $(OBJS)


clean:
	@rm -vf $(TESTOBJS)

fclean: clean
	@rm -vf libstu.a
	@rm -vf ut.out

re: fclean all


.PHONY: fclean re clean all
