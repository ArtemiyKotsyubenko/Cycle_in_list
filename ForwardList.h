#ifndef CYCLE_IN_LIST_FORWARDLIST_H
#define CYCLE_IN_LIST_FORWARDLIST_H

typedef struct Node {
    int value;
    struct Node *next;
} Node;


typedef struct ForwardList {
    Node *head;
} ForwardList;

void ForwardList_constructor(ForwardList* forward_list){
    forward_list->head = NULL;
}

#endif //CYCLE_IN_LIST_FORWARDLIST_H
