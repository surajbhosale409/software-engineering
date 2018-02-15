CC = gcc
CFLAGS = -c
LFLAGS = -static

srcLibPath =  ../../../lib/Stack/stack1.0/
binLibPath =  ../../../../bin/lib/Stack/stack1.0/
binTestPath =  ../../../../bin/tests/Stack/stack1.0/
srcLibLListPath = ../../../lib/LinkedList/linkedList0.0/
binLibLListPath = ../../../../bin/lib/LinkedList/linkedList0.0/

createDir:
	mkdir -p $(binTestPath)

linkedlist0.0.a:
	make install_linkedlist0.0 -C $(srcLibLListPath)

libstack1.0.a:
	make install_stack1.0 -C $(srcLibPath)

install_stack1.0_test: linkedlist0.0.a libstack1.0.a createDir
	$(CC) $(CFLAG) $(LFLAGS) stack1.0Assert.c $(binLibPath)libstack1.0.a $(binLibLListPath)liblinkedlist0.0.a -o $(binTestPath)stack1.0Assert

clean_stack1.0_test:
	rm $(binTestPath)stack1.0Assert

run_stack1.0_test:
	./$(binTestPath)stack1.0Assert 100
	./$(binTestPath)stack1.0Assert 200
	./$(binTestPath)stack1.0Assert 1100
