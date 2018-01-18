#include<stdio.h>
#include<stdlib.h>
#include"stackHeaders/stack.h"
#include"stackAssert.h"


int main()
{
    stack *s=initStack(MAX_SIZE);
    stackAssert(s);
    return 0;
}
