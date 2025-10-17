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

Node * delete_given_value(Node * head , int value){
    Node * p = head;
    Node * q = head -> next;
    while (q -> data != value && q -> data != NULL){
        p = p -> next;
        q = q -> next;
    }
    if (q -> data == value){
        p -> next = q -> next;
        free(q);
    }
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
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 11;
    second->next = third;

    // link third and fourth node
    third->data = 88;
    third->next = fourth;

    // linked list terminates here
    fourth -> data = 66;
    fourth ->next = NULL;
    printf("before deleting the given value from the linked list:");
    linkedlisttraversal(head);
    head = delete_given_value(head,11);
    printf("after deleting the given value from the linked list:");
    linkedlisttraversal(head);

    return 0;
}