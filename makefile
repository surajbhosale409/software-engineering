
install_stack0.0:
	make install_stack0.0 -C src/lib/Stack/stack0.0

clean_stack0.0:
	make clean_stack0.0 -C src/lib/Stack/stack0.0
	
install_stack0.0_test:
	make install_stack0.0_test -C src/lib/Stack/stack0.0/tests

run_stack0.0_test:
	make run_stack0.0_test -C src/lib/Stack/stack0.0/tests

clean_stack0.0_test:
	make clean_stack0.0_test -C src/lib/Stack/stack0.0/tests
