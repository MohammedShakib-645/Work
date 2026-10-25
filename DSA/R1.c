#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50
typedef struct {
    int items[MAX];
    int top;
} stack;
void startStack(stack *s){
    s->top = -1;
}
bool isFULL(stack *s){
    if(s->top == MAX - 1){
        return true;
    }
    return false;
}
bool isEmpty(stack *s){
    if(s->top == -1){
        return true;
    }
    return false;
}
void push(stack *s, int value){
    if(isFULL(s)){ 
        printf("Stack is full..\n");
        return;
    }
    s->top++;
    s->items[s->top] = value;
    printf("The value %d is inserted successfully into the stack\n", value);
}
int pop(stack *s){
    if(isEmpty(s)){ 
        printf("There are no elements in the stack\n");
        return -1;
    }
    int poppedValue = s->items[s->top];
    s->top--;
    return poppedValue;
}
int peek(stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->items[s->top];
}
int getMin(stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    int min = s->items[s->top]; 
    for(int i = s->top - 1; i >= 0; i--) {
        if(s->items[i] < min){ 
            min = s->items[i];
        }
    }
    return min;
}
int main(){
    stack s;
    startStack(&s);
    push(&s, 10);
    push(&s, 5);
    push(&s, 20);
    push(&s, 3); 
    printf("Minimum value is: %d\n", getMin(&s)); 
    printf("Popped value: %d\n", pop(&s));        
    printf("Minimum value now: %d\n", getMin(&s)); 
    return 0;
}