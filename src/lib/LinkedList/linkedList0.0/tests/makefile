CC = gcc
CFLAGS = -c
LFLAGS = -static

binLibPath =  ../../../../../bin/lib/LinkedList/linkedList0.0/
binTestPath =  ../../../../../bin/lib/LinkedList/linkedList0.0/tests/

createDir:
	mkdir -p $(binTestPath)

liblinkedlist0.0.a:
	make install_linkedlist0.0 -C ../

install_linkedlist0.0_test: liblinkedlist0.0.a createDir
	$(CC) $(CFLAG) $(LFLAGS) linkedList0.0Assert.c $(binLibPath)liblinkedlist0.0.a -o $(binTestPath)linkedList0.0Assert

clean_linkedlist0.0_test:
	rm $(binTestPath)linkedList0.0Assert

run_linkedlist0.0_test:
	./$(binTestPath)linkedList0.0Assert 
