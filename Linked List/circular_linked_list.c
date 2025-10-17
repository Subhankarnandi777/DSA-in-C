#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;

void linkedlisttraversal(Node *head){
    Node * ptr = head;
    do{
        printf("Element is %d\n", ptr -> data);
        ptr = ptr -> next;
    } while (ptr != head);
    
}

Node * insertatfirst (Node * head , int data){
    Node * ptr = (Node *) malloc (sizeof(Node));
    ptr -> data = data;
    Node * p = head -> next;

    while (p -> next != head){
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
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
    third->data = 6;
    third->next = fourth;

    // linked list terminates here
    fourth -> data = 1;
    fourth ->next = head;
    printf("before executing the circular linked list:");
    linkedlisttraversal(head);
    head = insertatfirst(head, 90);
    printf("after executing the circular linked list:");
    linkedlisttraversal(head);


    return 0;
}