Queue Implementation Using Array in C
This is an example implementation of a queue using an array in C. A queue is a data structure that operates in a "first in, first out" (FIFO) manner, meaning that the first element added to the queue is the first one to be removed.

Overview
In this implementation, we define a queue using an integer array and two indices: front and rear. front represents the index of the front element in the queue, while rear represents the index of the rear element in the queue. If the queue is empty, both front and rear are initialized to -1.

We implement three queue operations: enqueue, dequeue, and print. Here's what each operation does:

enqueue: Adds an element to the rear of the queue. If the queue is already full, an error message is printed and the element is not added.
dequeue: Removes and returns the element at the front of the queue. If the queue is empty, an error message is printed and -1 is returned.
print: Prints the elements of the queue from front to rear.
