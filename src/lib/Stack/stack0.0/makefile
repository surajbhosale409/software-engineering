CC = gcc
CFLAG = -c
binLibPath =  ../../../../bin/lib/Stack/stack0.0/

stackObjects = $(binLibPath)consDestruct.o $(binLibPath)push.o $(binLibPath)pop.o $(binLibPath)peek.o $(binLibPath)copy.o $(binLibPath)areEqual.o

$(binLibPath)%.o: %.c
	$(CC) $(CFLAG) $< -o $@

libstack0.0.a: $(stackObjects)
	ar rcs $(binLibPath)$@ $^

install: libstack0.0.a

clean:
	rm $(binLibPath)*.o
	rm $(binLibPath)*.a
		
