run:
	make -C ../
	gcc test.c ../libxmemtools.a -o test -I../include
	valgrind --leak-check=full --track-origins=yes ./test

.PHONY: clean
clean:
	rm -f test

