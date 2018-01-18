//Author:       Suraj R Bhosale
//Date:         18 Jan 2018
//Description:  This is header file for stack assertions, Here stack will be tested based on few assertions

#include<assert.h>
#define TRUE 1
#define FALSE 0

void stackAssert(stack *s)
{
  assert( push(s,10)==TRUE );
  assert( peek(s)==TRUE );
  assert( push(s,12)==TRUE );
  assert( pop(s)==TRUE );
  assert( pop(s)==TRUE );
  assert( pop(s)==TRUE );   //This assertion will fail

}
