CC = gcc
CFLAGS = -c
LFLAGS = -static

srcLibPath =  ../../../lib/Stack/stack0.0/
binLibPath =  ../../../../bin/lib/Stack/stack0.0/
binTestPath =  ../../../../bin/tests/Stack/stack0.0/

createDir:
	mkdir -p $(binTestPath)

libstack0.0.a:
	make install_stack0.0 -C $(srcLibPath)

install_stack0.0_test: libstack0.0.a createDir
	$(CC) $(CFLAG) $(LFLAGS) stack0.0Assert.c $(binLibPath)libstack0.0.a -o $(binTestPath)stack0.0Assert

clean_stack0.0_test:
	rm $(binTestPath)stack0.0Assert

run_stack0.0_test:
	./$(binTestPath)stack0.0Assert 100
	./$(binTestPath)stack0.0Assert 200
	./$(binTestPath)stack0.0Assert 1100
