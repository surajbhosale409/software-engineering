
int areEqual(stack *s1, stack *s2)
{
    int elt1,elt2;
    stack *copier1,*copier2;

    if(s1->typeOfData != s2->typeOfData)
        return 0;

    initStack(&copier1,s1->capacity);
    initStack(&copier2,s2->capacity);
    copy(copier1,s1);
    copy(copier2,s2);
    
    switch(s1->typeOfData)
    {
        case 0: //type: int
                
                while(!isEmpty(copier1) && !isEmpty(copier2))
                {
                    peek(copier1,&elt1);
                    peek(copier2,&elt2);
                    if(elt1!=elt2)
                        return 0;
                    pop(copier1);
                    pop(copier2);
                }
                if(!isEmpty(copier1) || !isEmpty(copier2))
                    return 0;
                return 1;
    }
}

