#include <iostream>
#include "LinkedList.hpp"

void LinkedList::insertAtBegin(int val){
    ListNode* newNode = new ListNode(val);
    if(!head){
        head = newNode;
        tail = newNode;
    }else{
        newNode->setNext(head);
        head = newNode;
    }
}

void LinkedList::insertAtEnd(int val){
    ListNode* newNode = new ListNode(val);
    if(!head){
        head = newNode;
        tail = newNode;
    }else{
        tail->setNext(newNode);
        tail = newNode;
    }
}

void LinkedList::remove(int val){
    ListNode* temp = head;
    ListNode* prev = nullptr;

    while(temp != nullptr){
        if(temp->getVal() == val){
            if(prev == nullptr){
                head = temp->getNext();
                if (head == nullptr) {
                    tail = nullptr;
                }
            }else{
                prev->setNext(temp->getNext());
                if (temp == tail) {
                    tail = prev;
                }
            }
            delete temp;
            return;
        }else{
            prev = temp;
            temp = temp->getNext();
        }
    }
}

void LinkedList::print(){
    ListNode* temp = head;
    while(temp){
        std::cout << temp->getVal() << " ";
        temp = temp->getNext();
    }
}

LinkedList::~LinkedList(){
    ListNode* temp = head;
    while(temp){
        ListNode* next = temp->getNext();
        delete temp;
        temp = next;
    }
}