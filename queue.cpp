/****Name:Bishika Pokharel
/*****  Challenege 2
/****  Purpose:The purpose of this program is to provide the implementation of the Queue class defined in queue.h. 
#include "queue.h"
#include <iostream>

Queue::Queue(bool isFIFO) : head(nullptr), tail(nullptr), size(0), isFIFO(isFIFO) {}

Queue::~Queue() {
    clear();
}

bool Queue::push(int id, const std::string& information) {
    if (id <= 0 || information.empty()) return false;

    Data* newNode = new Data(id, information);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
    return true;
}

bool Queue::pull(Data& data) {
    if (!head) {
        data.id = -1;
        data.information = "";
        return false;
    }

    if (isFIFO) {
        data.id = head->id;
        data.information = head->information;
        removeHead();
    } else {
        data.id = tail->id;
        data.information = tail->information;
        removeTail();
    }
    size--;
    return true;
}

int Queue::peek() const {
    if (!head) return -1;
    return isFIFO ? head->id : tail->id;
}

int Queue::count() const {
    return size;
}

void Queue::clear() {
    while (head) removeHead();
}

bool Queue::exists(int id) const {
    Data* current = head;
    while (current) {
        if (current->id == id) return true;
        current = current->next;
    }
    return false;
}

int Queue::find(int id) const {
    Data* current = head;
    int position = 0;
    while (current) {
        if (current->id == id) return isFIFO ? position : size - position - 1;
        current = current->next;
        position++;
    }
    return -1;
}

// Private helper methods
void Queue::removeHead() {
    if (!head) return;
    Data* temp = head;
    head = head->next;
    if (!head) tail = nullptr;
    delete temp;
}

void Queue::removeTail() {
    if (!head) return;

    if (head == tail) {
        delete head;
        head = tail = nullptr;
    } else {
        Data* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        delete tail;
        tail = current;
        tail->next = nullptr;
    }
}
