#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

struct PrintJob {
    int jobID;
    char documentName[50];
};

struct Queue {
    struct PrintJob items[MAX_QUEUE_SIZE];
    int front, rear;
};

void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct Queue *q) {
    return (q->rear == MAX_QUEUE_SIZE - 1);
}

int isEmpty(struct Queue *q) {
    return (q->front == -1);
}

void enqueue(struct Queue *q, struct PrintJob job) {
    if (isFull(q)) {
        printf("La cola de impresión está llena. No se pueden agregar más trabajos.\n");
    } else {
        if (isEmpty(q)) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = job;
        printf("Trabajo de impresión #%d encolado: %s\n", job.jobID, job.documentName);
    }
}

struct PrintJob dequeue(struct Queue *q) {
    struct PrintJob job;
    job.jobID = -1; // Valor por defecto para indicar un error
    if (isEmpty(q)) {
        printf("La cola de impresión está vacía. No hay trabajos para imprimir.\n");
    } else {
        job = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            // Reiniciar la cola cuando se ha desencolado el último trabajo.
            q->front = q->rear = -1;
        }
    }
    return job;
}

void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("La cola de impresión está vacía.\n");
    } else {
        printf("Trabajos de impresión en cola:\n");
        for (int i = q->front; i <= q->rear; i++) {
            printf("Trabajo #%d: %s\n", q->items[i].jobID, q->items[i].documentName);
        }
    }
}

int main() {
    struct Queue printQueue;
    initializeQueue(&printQueue);

    struct PrintJob job1 = {1, "documento1.txt"};
    struct PrintJob job2 = {2, "documento2.pdf"};
    struct PrintJob job3 = {3, "documento3.doc"};

    enqueue(&printQueue, job1);
    enqueue(&printQueue, job2);
    enqueue(&printQueue, job3);

    display(&printQueue);

    struct PrintJob printedJob = dequeue(&printQueue);
    if (printedJob.jobID != -1) {
        printf("Imprimiendo trabajo de impresión #%d: %s\n", printedJob.jobID, printedJob.documentName);
    }

    display(&printQueue);

    return 0;
}
