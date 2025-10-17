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

Node * deleteatindtex(Node * head , int index){
    Node * p = head;
    Node * q = head -> next;
    for (int i = 0; i < index-1 ; i++){
        p = p-> next;
        q = q -> next;
    }
    p -> next = q-> next;
    free(q);
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
    printf("linked  list before deletion at index:");
    linkedlisttraversal(head);
    head = deleteatindtex(head , 2 );
    printf("linked list after deletion at index:");
    linkedlisttraversal(head);
    return 0;
}