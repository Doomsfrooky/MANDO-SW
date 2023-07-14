#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_QUEUE_SIZE 100
#define MAX_STACK_SIZE 100

typedef struct {
    double data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queue;

typedef struct {
    double data[MAX_STACK_SIZE];
    int top;
} Stack;

void enqueue(Queue* queue, double item) {
    if ((queue->rear + 1) % MAX_QUEUE_SIZE == queue->front) {
        printf("Error: Queue is full\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX_QUEUE_SIZE;
    queue->data[queue->rear] = item;
}

double dequeue(Queue* queue) {
    if (queue->front == queue->rear) {
        printf("Error: Queue is empty\n");
        return 0;
    }
    queue->front = (queue->front + 1) % MAX_QUEUE_SIZE;
    return queue->data[queue->front];
}

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
    Queue queue;
    queue.front = 0;
    queue.rear = 0;

    Stack stack;
    stack.top = -1;

    double operand1, operand2, result;
    char* token = expression;

    while (*token != '\0') {
        if (isdigit(*token)) {
            double operand = atof(token);
            enqueue(&queue, operand);
            while (isdigit(*token) || *token == '.') {
                token++;
            }
        }
        else if (*token == '+' || *token == '-' || *token == '*' || *token == '/') {
            operand2 = dequeue(&queue);
            operand1 = dequeue(&queue);
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
            enqueue(&queue, result);
            token++;
        }
        else {
            token++;
        }
    }

    if (queue.front == queue.rear) {
        printf("Error: Invalid expression\n");
        return 0;
    }

    return dequeue(&queue);
}

int main() {
    char expression[100];
    printf("Enter a postfix expression: ");
    fgets(expression, sizeof(expression), stdin);

    double result = evaluatePostfix(expression);
    printf("Result: %lf\n", result);

    return 0;
}
