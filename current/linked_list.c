#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void push(node_t ** , int);

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d,", current->val);
        current = current->next;
    }
    printf("\n");
}

void push(node_t ** head, int val) {
    node_t * new_node;
    new_node = (node_t *)malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

int main(void) {

    node_t * head = (node_t *)malloc(sizeof(node_t));

    if (head == NULL) {
        return 1;
    }

    head->val = 1;
    head->next = (node_t *) malloc(sizeof(node_t));
    head->next->val = 50;
    head->next->next = NULL;

    print_list(head);
    push(&head, 20);

    print_list(head);
    push(&head, 42);
    print_list(head);
    return 0;

}
