#include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// add an element to the rear of the queue
void enqueue(int element) {
  if (rear == MAX_SIZE - 1) {
    printf("Error: queue is full\n");
    return;
  }
  if (front == -1) {
    front = 0;
  }
  rear++;
  queue[rear] = element;
}

// remove and return the element at the front of the queue
int dequeue() {
  if (front == -1 || front > rear) {
    printf("Error: queue is empty\n");
    return -1;
  }
  int element = queue[front];
  front++;
  return element;
}

// print the elements of the queue
void print() {
  if (front == -1 || front > rear) {
    printf("Queue is empty\n");
    return;
  }
  printf("Queue:");
  for (int i = front; i <= rear; i++) {
    printf(" %d", queue[i]);
  }
  printf("\n");
}

int main() {
  enqueue(5);
  enqueue(3);
  enqueue(8);
  print();
  int element = dequeue();
  printf("Dequeued element: %d\n", element);
  print();
  enqueue(2);
  enqueue(9);
  enqueue(1);
  print();
  return 0;
}
