#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include "ForwardList.h"
#include "Hash_table.h"


struct Node *cycle_exists(struct Node *head) {
    struct Node *first_iterator = head;
    struct Node *second_iterator;
    if (head->next) {
        second_iterator = head->next;
    } else {
        return NULL;
    }


    while (first_iterator != second_iterator) {
        if (first_iterator->next) {
            first_iterator = first_iterator->next;
        } else {
            return NULL;
        }


        //lazy evaluations
        if (second_iterator->next && second_iterator->next->next) {
            second_iterator = second_iterator->next->next;
        } else {
            return NULL;
        }
    }

    return first_iterator;


}

// O(1) memory, O(n^2) time
struct Node *cycleStart(struct Node *head) {
    if (!head) {
        return NULL;
    }

    Node *pv = cycle_exists(head);
    if (!pv) {
        return NULL;
    } else {

        Node *first_iterator = head;
        while (true) {
            Node *second_iterator = pv->next;

            while (first_iterator != second_iterator && second_iterator != pv) {
                second_iterator = second_iterator->next;
            }
            if (second_iterator == first_iterator) {
                return first_iterator;
            } else {
                first_iterator = first_iterator->next;
            }
        }

    }

}

//O(n) memory, O(n) time
struct Node *cycleStart_(struct Node *head) {
    if (!head) {
        return NULL;
    }

    HashTable hash_table;
    HashTable_constructor(&hash_table);



    for(Node *pv = head; pv != NULL; pv = pv->next){
        if (find(&hash_table, pv)){
            return pv;
        }
        insert(&hash_table, pv);
    }
    return NULL;
}


int main() {

    /*****************************************************************************************************************/

    ForwardList lst;
    ForwardList_constructor(&lst);

    int size;
    int start;

    //enter -1 to test without cycles
    scanf("%d%d", &size, &start);

    Node *arr = malloc(size * sizeof(Node));

    for (int i = 0; i < size; ++i) {
        arr[i].value = i;
        arr[i].next = NULL;
    }

    lst.head = &arr[0];

    for (int i = 0; i < size - 1; ++i) {
        arr[i].next = &arr[i + 1];
    }


    if(start != -1) {
        arr[size - 1].next = &arr[start];
    }

    Node *pv = cycleStart_(lst.head);
    if (pv) {
        printf("%d\n", pv->value);
    } else {
        printf("no cycles\n");
    }


    pv = cycleStart(lst.head);
    if (pv) {
        printf("%d\n", pv->value);
    } else {
        printf("no cycles\n");
    }


    free(arr);
    /*****************************************************************************************************************/
    return 0;
}
