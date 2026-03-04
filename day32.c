#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

// Pop function
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    top--;
}

int main() {
    int n, m, i, value;

    // Input n
    scanf("%d", &n);

    // Input n elements and push
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        push(value);
    }

    // Input number of pops
    scanf("%d", &m);

    // Perform m pops
    for (i = 0; i < m; i++) {
        pop();
    }

    // Print remaining elements (top to bottom)
    for (i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    return 0;
}