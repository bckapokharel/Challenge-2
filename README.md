# Challenge-2
This challenge excersise implements a Queue Abstract Data Type (ADT) that supports both FIFO (First-In-First-Out) and LIFO (Last-In-First-Out) operations using a linked list structure. The implementation is done in C++ with a single class, Queue. This ADT supports common queue operations such as push, pull, peek, count, clear, exists, and find.

This challenge contains the following files:
queue.h: Header file for the Queue class, including the Data struct and function prototypes.
queue.cpp: Implementation file for the Queue class, defining all methods.
main.h: Header file for testing purposes.
main.cpp: Test file with a script to validate both FIFO and LIFO operations of the Queue class.

key Features
push: Adds a node with an integer id and string information.
pull: Removes a node and returns its data.
peek: Views the next node's id without removing it.
count: Returns the number of nodes in the queue.
clear: Empties the queue.
exists: Checks if a node with a specified id exists.
find: Finds the zero-based position of a node with a specific id.
