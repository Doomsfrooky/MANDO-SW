#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100

typedef struct {
    char data[MAX_QUEUE_SIZE][50];
    int front;
    int rear;
} Queue;

void enqueue(Queue* queue, const char* item) {
    if ((queue->rear + 1) % MAX_QUEUE_SIZE == queue->front) {
        printf("Error: Queue is full\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX_QUEUE_SIZE;
    strcpy(queue->data[queue->rear], item);
}

void dequeue(Queue* queue) {
    if (queue->front == queue->rear) {
        printf("Error: Queue is empty\n");
        return;
    }
    queue->front = (queue->front + 1) % MAX_QUEUE_SIZE;
}

void welcomeQueue(Queue* queue) {
    printf("Welcome to the Queue!\n");

    char name[50];
    while (1) {
        printf("Enter a name (or 'q' to quit): ");
        scanf("%s", name);
        if (strcmp(name, "q") == 0) {
            break;
        }
        enqueue(queue, name);
    }

    printf("\nProcessing the Queue:\n");
    while (queue->front != queue->rear) {
        printf("Welcome, %s!\n", queue->data[queue->front + 1]);
        dequeue(queue);
    }
}

int main() {
    Queue queue;
    queue.front = 0;
    queue.rear = 0;

    welcomeQueue(&queue);

    return 0;
}
