#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

typedef struct {
    double data[MAX_STACK_SIZE];
    int top;
} Stack;

void push(Stack* stack, double item) {
    if (stack->top == MAX_STACK_SIZE - 1) {
        printf("Error: Stack is full\n");
        return;
    }
    stack->data[++(stack->top)] = item;
}

double pop(Stack* stack) {
    if (stack->top == -1) {
        printf("Error: Stack is empty\n");
        return 0;
    }
    return stack->data[(stack->top)--];
}

double evaluatePostfix(char* expression) {
    Stack stack;
    stack.top = -1;

    double operand1, operand2, result;
    char* token = expression;

    while (*token != '\0') {
        if (isdigit(*token)) {
            double operand = atof(token);
            push(&stack, operand);
            while (isdigit(*token) || *token == '.') {
                token++;
            }
        }
        else if (*token == '+' || *token == '-' || *token == '*' || *token == '/') {
            operand2 = pop(&stack);
            operand1 = pop(&stack);
            switch (*token) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                if (operand2 == 0) {
                    printf("Error: Division by zero\n");
                    return 0;
                }
                result = operand1 / operand2;
                break;
            }
            push(&stack, result);
            token++;
        }
        else {
            token++;
        }
    }

    if (stack.top != 0) {
        printf("Error: Invalid expression\n");
        return 0;
    }

    return pop(&stack);
}

int main() {
    char expression[100];
    printf("Enter a postfix expression: ");
    fgets(expression, sizeof(expression), stdin);

    double result = evaluatePostfix(expression);
    printf("Result: %lf\n", result);

    return 0;
}
