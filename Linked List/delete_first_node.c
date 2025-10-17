#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;

void linkedlisttraversal(Node *ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr -> data);
        ptr = ptr->next;
    }
}

Node * deletefirst(Node *head){
    Node * ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}
int main(){
     Node *head;
     Node *second;
     Node *third;
     Node *fourth;

    // allocate the memory for nodes in the linked list in heap
    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    // link first and second node
    head->data = 4;
    head->next = second;

    // link second and third node
    second->data = 3;
    second->next = third;

    // link third and fourth node
    third->data = 8;
    third->next = fourth;

    // linked list terminates here
    fourth -> data = 1;
    fourth ->next = NULL;

    printf("linked list before deletion:\n");
    linkedlisttraversal(head);

    head = deletefirst(head);
    head = deletefirst(head);
    printf("linked list after deletion:\n");
    linkedlisttraversal(head);

    return 0;
}