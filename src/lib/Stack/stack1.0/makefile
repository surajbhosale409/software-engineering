CC = gcc
CFLAG = -c
binLibPath =  ../../../../bin/lib/Stack/stack1.0/

createDir:
	mkdir -p $(binLibPath)

stackObjects = $(binLibPath)consDestruct.o $(binLibPath)push.o $(binLibPath)pop.o $(binLibPath)peek.o $(binLibPath)copy.o $(binLibPath)areEqual.o

$(binLibPath)%.o: %.c
	$(CC) $(CFLAG) $< -o $@

libstack1.0.a: $(stackObjects)
	ar rcs $(binLibPath)$@ $^

install_stack1.0: createDir libstack1.0.a

clean_stack1.0:
	rm $(binLibPath)*.o
	rm $(binLibPath)*.a

