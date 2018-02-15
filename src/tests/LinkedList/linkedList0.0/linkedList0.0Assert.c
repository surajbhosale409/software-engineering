#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"../../../lib/LinkedList/linkedList0.0/linkedList.h"
#define TRUE 1
#define FALSE 0

void linkedListAssert()
{
    node *list1=NULL,*list2=NULL;
    
    list1=insertFront(list1,10);
    assert( list1!=NULL );

    list1=insertEnd(list1,20);
    list1=insertEnd(list1,30);
    assert( list1!=NULL);

    list1=deleteFront(list1);
    assert( list1!=NULL);

    list1=insertFront(list1,10);
    list2=copyLList(list2,list1);
    assert( list2!=NULL);

    assert( areEqualLList(list1,list2)==TRUE);
    
    fprintf(stdout,"Success\n");
}

int main()
{
    linkedListAssert();
    return 0;
}
