//Author:      Suraj R Bhosale
//Date:        18 Jan 2018
//Description: This header contains the structure for stack using linked list

typedef struct stackLinkedList
{
    int data;
    struct stackLinkedList *next;
}stackLinkedList;


typedef struct stack
{
    int capacity;
    int currentSize;
    stackLinkedList *top;
}stack;
