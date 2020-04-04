#include <malloc.h>
#include <stdbool.h>

#ifndef CYCLE_IN_LIST_HASH_TABLE_H
#define CYCLE_IN_LIST_HASH_TABLE_H


typedef struct Node_ {
    void *ptr;
    struct Node_ *next;
} Node_;


typedef struct Chain {
    Node_ *head;
} Chain;


typedef struct HashTable {
    int coefficient;
    int size;
    int amount_of_elements;
    Chain *table;
} HashTable;

void HashTable_constructor(HashTable *hash_table) {
    hash_table->size = 8;
    hash_table->coefficient = 0;
    hash_table->amount_of_elements = 0;
    hash_table->table = (Chain *) malloc(hash_table->size * sizeof(Chain));
    for(int i = 0; i < 8; ++i){
        hash_table->table[i].head = NULL;
    }
}

int count_hash(void *ptr, int mod) {
    return (int) ptr % mod;
}


void rehash(HashTable *hash_table) {//size
    int new_size = hash_table->size * 2;
    Chain *new_table = malloc(new_size * sizeof(Chain));

    for (int i = 0; i < new_size; ++i) {
        new_table[i].head = NULL;
    }

    for(int i = 0; i < hash_table->size; ++i){
        Node_* ptr_to_delete = NULL;
        for(Node_* pv = hash_table->table[i].head; pv != NULL; ptr_to_delete = pv, pv = pv->next){

            free(ptr_to_delete);
            int index = count_hash(pv->ptr, new_size);

            Node_* pv_ = malloc(sizeof(Node_));
            pv_->ptr = pv->ptr;

            pv_->next = new_table[index].head;
            new_table[index].head = pv_;
        }
    }

    free(hash_table->table);

    hash_table->table = new_table;
}

bool find(HashTable *hash_table, void *value){
    int index = count_hash(value, hash_table->size);
    for(Node_* pv = hash_table->table[index].head; pv != NULL; pv = pv->next){
        if (pv->ptr == value){
            return true;
        }

    }
    return  false;
}

void insert(HashTable *hash_table, void *value) {
    if( find(hash_table, value)){
        return;
    }
    ++hash_table->amount_of_elements;
    hash_table->coefficient = hash_table->amount_of_elements * 100 / hash_table->size;
    if (hash_table->coefficient > 75) {
        rehash(hash_table);
        hash_table->coefficient = hash_table->amount_of_elements * 100 / hash_table->size;
    }

    int index = count_hash(value, hash_table->size);

    Node_* pv = malloc(sizeof(Node_));
    pv->ptr = value;

    pv->next = hash_table->table[index].head;
    hash_table->table[index].head = pv;

}



#endif //CYCLE_IN_LIST_HASH_TABLE_H
