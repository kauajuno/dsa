#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListNode.hpp"

class LinkedList{
    private:
        ListNode* head;
        ListNode* tail;

    public:

    LinkedList() : head(nullptr), tail(nullptr) {};
    ~LinkedList();
    void insertAtEnd(int val);
    void insertAtBegin(int val);
    void remove(int val);
    void print();
};

#endif