build_lib:
	gcc -c src/*.c -Iinclude
	ar rc libstu.a *.o

clean:
	find -name "*~" -delete -print -o -name "*#" -delete -print -o -name "*.o" -delete -print -o -name "*.gch" -delete -print -o -name "a.out" -delete -print -o -name "vgcore*" -delete -print

test:
	gcc -Iinclude src/*.c test/*.c -lcriterion -o unit_test.out
	./unit_test.out