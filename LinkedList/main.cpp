#include <iostream>

#include "LinkedList.hpp"

int main(){
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(5);
    list.remove(3);
    list.print();
    return 0;
}