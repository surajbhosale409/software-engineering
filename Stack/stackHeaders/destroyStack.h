
int destroyStack(stack *s)
{
   if(s)
   {  
    while(!isEmpty(s))
        pop(s);
    free(s);
    return 1;
   }
   return 0;
}
