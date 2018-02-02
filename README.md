This repo contains Software Engineering course assignments and related stuff.

Following are few commands for building,testing and cleaning libraries that are provided by me,

[1]     make install_stack0.0               :: For building libstack0.0
[2]     make insall_stack0.0_test           :: For building stack0.0 Test program
[3]     make run_stack0.0_test              :: For running the stack0.0 test program
[4]     make clean_stack0.0_test            :: For removing test program executable
[5]     make clean_stack0.0                 :: For removing libstack0.0 library 
[6]     make install_linkedlist0.0          :: For building liblinkedlist0.0
[7]     make clean_linkedlist0.0            :: For removing liblinkedlist0.0 library
[8]     make install_linkedlist0.0_test     :: For building linkedlist0.0 test program
[9]     make run_linkedlist0.0_test         :: For running the linkedlist0.0 test program
[10]    make clean_linkedlist0.0_test       :: For removing linkedlist0.0 test program


(Note: You can use above commands for building, cleaning and testing of only those libraries or tests that are in the current subtree of directory structure)


e.g.

            se2-18
          /       \
        src      bin
        /
      lib
    /    \
 Stack   LinkedList
   |
stack0.0


In above case you can build,clean stack0.0 library only from [ se2-18 , src , lib , Stack , stack0.0 ] this directories.

