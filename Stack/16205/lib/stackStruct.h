//Author:      Suraj R Bhosale
//Date:        18 Jan 2018
//Description: This header contains the structure for stack using linked list

#ifndef _STACK_STRUCT_H
#define _STACK_STRUCT_H

typedef struct stackLinkedList
{
    int data;
    struct stack *sNext;
    struct stackLinkedList *next;
}stackLinkedList;


typedef struct stack
{
    int capacity;
    int currentSize;
    int typeOfData;       // To allow stack of stack of int (so on)
                          // typeOfData = 0  (for int type)
                          // typeOfData = 1  (for stack type)
    stackLinkedList *top;
}stack;

#endif
