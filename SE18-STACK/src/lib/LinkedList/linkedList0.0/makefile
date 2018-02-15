CC = gcc
CFLAG = -c
binLibPath =  ../../../../bin/lib/LinkedList/linkedList0.0/

.PHONY: install_linkedlist0.0 clean_linkedlist0.0

createDir:
	mkdir -p $(binLibPath)

linkedListObjects = $(binLibPath)newNode.o $(binLibPath)insertEnd.o $(binLibPath)insertFront.o $(binLibPath)deleteFront.o $(binLibPath)length.o $(binLibPath)copyLList.o $(binLibPath)areEqualLList.o $(binLibPath)destructList.o

$(binLibPath)%.o: %.c
	$(CC) $(CFLAG) $< -o $@

liblinkedlist0.0.a: $(linkedListObjects)
	ar rcs $(binLibPath)$@ $^

install_linkedlist0.0: createDir liblinkedlist0.0.a

clean_linkedlist0.0:
	rm $(binLibPath)*.o
	rm $(binLibPath)*.a


