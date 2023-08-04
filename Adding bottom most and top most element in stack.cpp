#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Structure to represent the stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element into the stack
void push(struct Stack* stack, int item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++(stack->top)] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->items[(stack->top)--];
}

int main() {
    struct Stack stack1, stack2;
    initializeStack(&stack1);
    initializeStack(&stack2);

    // Push some elements into the stacks
    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);

    push(&stack2, 5);
    push(&stack2, 15);
    push(&stack2, 25);

    // Retrieve the bottom-most and top-most elements from each stack and add them
    int result = pop(&stack1) + pop(&stack2);

    printf("Result: %d\n", result);

    return 0;
}

