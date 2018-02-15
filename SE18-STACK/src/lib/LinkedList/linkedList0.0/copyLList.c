#include"linkedList.h"

node * copyLList(node *dest,node *src)
{
  if(src)
  {
      dest=insertEnd(dest,src->data);
      dest=copyLList(dest,src->next);
      return dest;
  }
  return dest;
}
