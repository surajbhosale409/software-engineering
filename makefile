stack0.0 = src/lib/Stack/stack0.0
stack1.1 = src/lib/Stack/stack1.1
linkedList0.0 = src/lib/LinkedList/linkedList0.0
stack0.0Tests = src/tests/Stack/stack0.0
stack1.0Tests = src/tests/Stack/stack1.0
linkedList0.0Tests = src/tests/LinkedList/linkedList0.0

%stack0.0:
	make $@ -C  $(stack0.0)

%stack1.0:
	make $@ -C  $(stack1.0)

%linkedlist0.0:
	make $@ -C $(linkedList0.0)

%stack0.0_test:
	make $@ -C  $(stack0.0Tests)

%stack1.0_test:
	make $@ -C  $(stack1.0Tests)

%linkedlist0.0_test:
	make $@ -C $(linkedList0.0Tests)

