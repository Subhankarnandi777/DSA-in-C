#include<stdio.h>
// #include<stdlib.h>
// typedef struct Node{
//     int data;
//     struct Node * next;
// }Node;

// void lineartraversal(Node *ptr){
//     while (ptr != NULL){
//         printf("Element: %d\n", ptr -> data);
//         ptr = ptr -> next;
//     }
    
// }

// Node * insertatend( Node * head , int data){
//     Node * ptr = (Node *)malloc(sizeof(Node));
//     Node * p = head;
//     while (p -> next != NULL){
//         p = p -> next;
//     }
//     p -> next = ptr;
//     ptr -> next = NULL;
//     return head;

// }
// int main(){
//      Node *head;
//      Node *second;
//      Node *third;
//      Node *fourth;

//     // allocate the memory for nodes in the linked list in heap
//     head = (Node *)malloc(sizeof(Node));
//     second = (Node *)malloc(sizeof(Node));
//     third = (Node *)malloc(sizeof(Node));
//     fourth = (Node *)malloc(sizeof(Node));

//     // link first and second node
//     head->data = 7;
//     head->next = second;

//     // link second and third node
//     second->data = 11;
//     second->next = third;

//     // link third and fourth node
//     third->data = 88;
//     third->next = fourth;

//     // linked list terminates here
//     fourth -> data = 66;
//     fourth ->next = NULL;



//     head = insertatend(head , 90);
//     lineartraversal(head);

//     return 0;
// }