#include"headers.h"

int main()
{   
    int a;

    printf("\n Linked List Operaions: \n");
    printf("Press 1. for Traversal of LL \n");
    printf("Press 2. for Insertion of LL \n");
    printf("Press 3. for Deletion  of LL \n");
    printf("Press 4. for Search    of LL \n");
    printf("Press 5. for Sort      of LL \n");

    printf("Enter your choice %d \n", a);

    switch(a)
    {
        case 1:
            ll_traversal();
            break;
        case 2:
            ll_inserttion();
            break;
        case 3:
            ll_deletion();
            break;
        case 4:
            ll_search();
            break;
        case 5:
            ll_sort();
        default:
            return(0);
    }
}