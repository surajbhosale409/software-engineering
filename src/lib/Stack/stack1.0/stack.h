//Author:       Suraj R Bhosale
//Date:         18 Jan 2018
//Description:  This is main header file for stack which includes all other stack routines prototypes.

#ifndef _STACK_H
#define _STACK_H

#include<stdlib.h>
#include<stdio.h>
#include"../../LinkedList/linkedList0.0/linkedList.h"
#include"stackStruct.h"

#define MAX_SIZE 1000


typedef int errcode;


errcode push(stack *, int);
errcode pop(stack *);
errcode peek(stack *, int *);
errcode isFull(stack *);
errcode isEmpty(stack *);
errcode constructStack(stack **);
errcode destructStack(stack **);
errcode copy(stack **, stack *);
errcode areEqual(stack *, stack *);

#endif
