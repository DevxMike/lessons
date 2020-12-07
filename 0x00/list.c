#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int value;
    struct node *next;
};

typedef struct node node_t;

node_t* push_front(node_t* list, int value){
    node_t *new_list = (node_t*)malloc(sizeof(node_t));
    new_list->value = value;
    new_list->next = list;
    return new_list;
}

node_t* pop_front(node_t* list, int *value){
    node_t* first = list;
    if(value){
        *value = list->value;
    }
    free(first);
    return list->next;
}

node_t* push_back(node_t* list, int value){
    node_t* tmp = (node_t*)malloc(sizeof(node_t)), *iter = list;
    tmp->value = value;
    tmp->next = NULL;
    while(iter->next != NULL){
        iter = iter->next;
    }
    iter->next = tmp;
    return list;
}

node_t* pop_back(node_t* list, int *value){
    node_t* last = list;
    while(last->next != NULL){
        last = last->next;
    }
    if(value){
        *value = list->value;
    }
    free(last);
    last = NULL;
    return list;
}

typedef bool predicate(int);

node_t* remove_if(node_t* list, predicate p){
    node_t* iter = list;
    int count = 0;
    while(iter->next != NULL){
        if(p(iter->value)) {
            ++count;
        }
        iter = iter->next;
    }
    iter = list;
    while(count > 0){
        if(p(iter->value)){
            if(list == iter){
                pop_front(list, NULL); //na początku listy
                --count;
                iter = iter->next;
            }
            else if(iter->next == NULL){
                pop_back(list, NULL); //na końcu listy
                --count;
                iter = list;
            }
            else{
                node_t* iter2 = list;
                while(iter2->next != iter){
                    iter2 = iter2->next; //poszukiwanie elementu przed
                }
                iter2->next = iter->next;
                free(iter);
                iter = iter2->next;
                --count;
            }
        }
        else{
            iter = iter->next;
        }
    }
}

int main(void){
    struct node* list = NULL;
    struct node przykladowa; 
    struct node n1, n2, n3, n4;    
    przykladowa.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    node_t* iter = &przykladowa;
    int i = 1;
    while(iter != NULL){
        iter->value = i++;
        iter = iter->next;
    }
    iter = &przykladowa;
    while(iter != NULL){
        printf("%d\n", iter->value);
        iter = iter->next;
    }
    return 0;
}