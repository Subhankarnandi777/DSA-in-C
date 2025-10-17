#include <stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
}Node;

void linkedlisttraversal(Node * ptr){
    while (ptr != NULL){
        printf("Element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
    
}

Node * insertatindex(Node * head , int data , int index){
    Node * ptr = (Node *)malloc(sizeof(Node));
    Node * p = head;
    int i = 0;
    while (i!= index-1){
        p = p -> next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;

}
int main(){
    Node* head;
    Node* second;
    Node* third;
    Node* fourth;


    head = (Node *) malloc(sizeof(Node));
    second = (Node *) malloc(sizeof(Node));
    third= (Node *) malloc(sizeof(Node));
    fourth = (Node *) malloc(sizeof(Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 56;
    third -> next = fourth;

    fourth -> data = 78;
    fourth -> next = NULL;


head = insertatindex(head , 74, 1);
linkedlisttraversal(head);

return 0;
}