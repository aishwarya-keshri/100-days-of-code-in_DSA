#include <stdio.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

int priority(char x) {
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    return 0;
}

int main() {
    char exp[100], result[100];
    int i, j = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++) {

        if(isalnum(exp[i])) {  
            result[j++] = exp[i];
        }

        else if(exp[i] == '(') {
            push(exp[i]);
        }

        else if(exp[i] == ')') {
            while(stack[top] != '(') {
                result[j++] = pop();
            }
            pop();
        }

        else {
            while(top != -1 && priority(stack[top]) >= priority(exp[i])) {
                result[j++] = pop();
            }
            push(exp[i]);
        }
    }

    while(top != -1) {
        result[j++] = pop();
    }

    result[j] = '\0';

    printf("Postfix Expression: %s", result);

    return 0;
}