//Author:       Suraj R Bhosale
//Date:         18 Jan 2018
//Description:  This is code for stack assertions, Here stack will be tested based on few assertions

#include<stdio.h>
#include<stdlib.h>
#include"../../../lib/Stack/stack1.0/stack.h"
#include<assert.h>
#define TRUE 1
#define FALSE 0

void stackAssert(int size)
{
  stack *s,*sCopy;
  int elt1,elt2;

  assert(size<MAX_SIZE);

  assert( constructStack(&s)==TRUE );
  assert( push(s,10)==TRUE ); 
  assert( peek(s,&elt1)==TRUE );
  assert( push(s,12)==TRUE );
  assert( pop(s)==TRUE );
  assert( pop(s)==TRUE );

  assert( push(s,15)==TRUE ); 
  assert( push(s,16)==TRUE ); 
  assert( constructStack(&sCopy)==TRUE );
  assert( copy(&sCopy,s)==TRUE);
 
  peek(s,&elt1);
  peek(sCopy,&elt2);
  assert( elt1==elt2 );
  assert( areEqual(s,sCopy)==TRUE );

  assert( push(s,17)==TRUE ); 

  //assert( areEqual(s,sCopy)==TRUE );   //This assertion will fail as two stacks are not equal
  fprintf(stdout,"Success\n");
}



int main(int argc, char *argv[])
{
    stackAssert(atoi(argv[1]));
    return 0;
}
