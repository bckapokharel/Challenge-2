/*************************
Name:Bishika Pokharel
Challenege 2
Purpose:The purpose is to test the functionality of the Queue ADT that is implemented in queue.cpp. 
This file also acts as a test script to verify that the Queue class behaves as expected in both FIFO (First-In-First-Out) and LIFO (Last-In-First-Out) modes.
**************************/
#include "queue.h"
#include <iostream>

void testQueue(Queue& queue) {
    Queue::Data data(0, "");
    
    std::cout << "Pushing data..." << std::endl;
    queue.push(1, "First");
    queue.push(2, "Second");
    queue.push(3, "Third");

    std::cout << "Count: " << queue.count() << std::endl;

    std::cout << "Peeking: " << queue.peek() << std::endl;

    std::cout << "Pulling data..." << std::endl;
    while (queue.pull(data)) {
        std::cout << "Pulled ID: " << data.id << ", Info: " << data.information << std::endl;
    }

    std::cout << "Count after pull: " << queue.count() << std::endl;
    std::cout << "Clearing queue..." << std::endl;
    queue.clear();
    std::cout << "Count after clear: " << queue.count() << std::endl;
}

int main() {
    std::cout << "Testing FIFO Queue:" << std::endl;
    Queue fifoQueue(true);
    testQueue(fifoQueue);

    std::cout << "\nTesting LIFO Queue:" << std::endl;
    Queue lifoQueue(false);
    testQueue(lifoQueue);

    return 0;
}
