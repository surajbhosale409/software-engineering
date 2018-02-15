CC = gcc
CFLAGS = -c
LFLAGS = -static

srcLibPath = ../../../lib/LinkedList/linkedList0.0/
binLibPath =  ../../../../bin/lib/LinkedList/linkedList0.0/
binTestPath =  ../../../../bin/tests/LinkedList/linkedList0.0/

createDir:
	mkdir -p $(binTestPath)

liblinkedlist0.0.a:
	make install_linkedlist0.0 -C $(srcLibPath)

install_linkedlist0.0_test: liblinkedlist0.0.a createDir
	$(CC) $(CFLAG) $(LFLAGS) linkedList0.0Assert.c $(binLibPath)liblinkedlist0.0.a -o $(binTestPath)linkedList0.0Assert

clean_linkedlist0.0_test:
	rm $(binTestPath)linkedList0.0Assert

run_linkedlist0.0_test:
	./$(binTestPath)linkedList0.0Assert 
