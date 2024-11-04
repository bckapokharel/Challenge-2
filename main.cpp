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
