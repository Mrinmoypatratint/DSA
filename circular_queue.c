#include <stdio.h>
#define SIZE 5

struct CircularQueue {
    int items[SIZE];
    int front;
    int rear;
};

void insert(struct CircularQueue* queue, int value) {
    if ((queue->rear + 1) % SIZE == queue->front) {
        printf("Queue is full\n");
    } else {
        queue->rear = (queue->rear + 1) % SIZE;
        queue->items[queue->rear] = value;
        printf("Inserted %d\n", value);
    }
}

void delete(struct CircularQueue* queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty\n");
    } else {
        queue->front = (queue->front + 1) % SIZE;
        printf("Deleted %d\n", queue->items[queue->front]);
    }
}

void display(struct CircularQueue* queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty\n");
    } else {
        int i = queue->front + 1;
        printf("Queue elements: ");
        while (i != queue->rear + 1) {
            printf("%d ", queue->items[i]);
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

void showFront(struct CircularQueue* queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element: %d\n", queue->items[(queue->front + 1) % SIZE]);
    }
}

void showRear(struct CircularQueue* queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty\n");
    } else {
        printf("Rear element: %d\n", queue->items[queue->rear]);
    }
}

int main() {
    struct CircularQueue queue;
    queue.front = SIZE - 1;
    queue.rear = SIZE - 1;

    int choice, value;
    do {
        printf("\nCircular Queue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Show Front\n");
        printf("5. Show Rear\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insert(&queue, value);
                break;
            case 2:
                delete(&queue);
                break;
            case 3:
                display(&queue);
                break;
            case 4:
                showFront(&queue);
                break;
            case 5:
                showRear(&queue);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}