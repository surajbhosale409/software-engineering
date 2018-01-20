CC = gcc
CFLAG = -c
stackObjects = lib/consDestruct.o lib/push.o lib/pop.o lib/peek.o lib/isFull.o lib/isEmpty.o lib/copy.o lib/areEqual.o

%.o: 	  lib/%.c
		  $(CC) $(CFLAG) $< -o $@


libstack: $(stackObjects)


stackAssert: libstack
			 $(CC) test/stackAssert.c $(stackObjects) -o stackAssert

clean:
	         rm lib/*.o
			 rm stackAssert

runTest:
			 ./stackAssert 100
			 ./stackAssert 200
			 ./stackAssert 1100
