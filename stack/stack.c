#include<stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

int isFull(){
    return top == MAX-1;
}

int isEmpty(){
    return top == -1;
}

void push(int value){
    if (isFull()){
        printf("Stack Overflow! Cannot push %d\n",value);
    }else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow! Cannnot pop\n");
        return -1;
    } else{
        int popped = stack[top];
        top --;
        printf("%d popped from stack\n", popped);
    }
}
int peek(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return -1;
    } else{
        return stack[top];
    }
}

void display(){
    if (isEmpty()){
        printf("Stack is empty\n");
    } else{
        printf("Stack elements are: \n");
        for (int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
        
    }
}

int main(){
    push(10);
    push(20);
    push(30);

    display();

    printf("Top element is %d\n", peek());

    pop();
    display();

    return 0;
}