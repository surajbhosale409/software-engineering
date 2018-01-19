//Author:       Suraj R Bhosale
//Date:         18 Jan 2018
//Description:  This is header file for stack assertions, Here stack will be tested based on few assertions

#include<assert.h>
#define TRUE 1
#define FALSE 0

void stackAssert()
{
  stack *s,*sCopy;
  int elt1,elt2;

  assert( initStack(&s,MAX_SIZE)==TRUE );
  assert( push(s,10)==TRUE ); 
  assert( peek(s,&elt1)==TRUE );
  assert( push(s,12)==TRUE );
  assert( pop(s)==TRUE );
  assert( pop(s)==TRUE );
  assert( isEmpty(s)==TRUE);

  assert( push(s,15)==TRUE ); 
  assert( push(s,16)==TRUE ); 
  assert( initStack(&sCopy,MAX_SIZE)==TRUE );
  assert( copy(sCopy,s)==TRUE);
 
  peek(s,&elt1);
  peek(sCopy,&elt2);
  assert( elt1==elt2 );
  assert( areEqual(s,sCopy)==TRUE );

  assert( push(s,17)==TRUE ); 

  assert( areEqual(s,sCopy)==TRUE );
}
