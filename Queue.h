/**Name:Bishika Pokharel
    Challenge 2
  Purpose:The purpose of this program is to implement a flexible Queue Abstract Data Type (ADT) in C++ that can operate in two different modes: FIFO (First-In-First-Out) and LIFO (Last-In-First-Out). 
  This queue uses a linked list structure, allowing dynamic memory allocation to handle an unlimited number of elements without a fixed size constraint.
#ifndef QUEUE_H
#define QUEUE_H

#include <string>

class Queue {
public:
    // Struct to store data
    struct Data {
        int id;
        std::string information;
        Data* next;
        
        Data(int i, const std::string& info) : id(i), information(info), next(nullptr) {}
    };

    // This is Constructor with mode selection
    Queue(bool isFIFO = true);
    ~Queue();

    // This is Public methods
    bool push(int id, const std::string& information);
    bool pull(Data& data);
    int peek() const;
    int count() const;
    void clear();
    bool exists(int id) const;
    int find(int id) const;

private:
    Data* head;
    Data* tail;
    int size;
    bool isFIFO; //This  Determines whether the queue operates as FIFO or LIFO

    void removeHead();
    void removeTail();
};

#endif // QUEUE_H
