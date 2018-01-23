CC = gcc
CFLAGS = -c
LFLAGS = -static

binLibPath =  ../../../../bin/lib/Stack/stack0.0/
binTestPath =  ../../../../bin/tests/Stack/stack0.0/

libstack0.0.a:
	make install -C ../../../lib/Stack/stack0.0

install_test: libstack0.0.a
	$(CC) $(CFLAG) $(LFLAGS) stack0.0Assert.c $(binLibPath)libstack0.0.a -o $(binTestPath)stack0.0Assert

clean_test:
	rm $(binTestPath)stack0.0Assert

run_test:
	./$(binTestPath)stack0.0Assert 100
	./$(binTestPath)stack0.0Assert 200
	./$(binTestPath)stack0.0Assert 1100
