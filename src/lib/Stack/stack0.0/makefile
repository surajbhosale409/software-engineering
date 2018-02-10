CC = gcc
CFLAG = -c
binLibPath =  ../../../../bin/lib/Stack/stack0.0/

.PHONY: install_stack0.0 clean_stack0.0 libstack0.0.a creatDir

createDir:
	mkdir -p $(binLibPath)

stackObjects = $(binLibPath)consDestruct.o $(binLibPath)push.o $(binLibPath)pop.o $(binLibPath)peek.o $(binLibPath)copy.o $(binLibPath)areEqual.o

$(binLibPath)%.o: %.c
	$(CC) $(CFLAG) $< -o $@

libstack0.0.a: $(stackObjects)
	ar rcs $(binLibPath)$@ $^

install_stack0.0: createDir libstack0.0.a

clean_stack0.0:
	rm $(binLibPath)*.o
	rm $(binLibPath)*.a

