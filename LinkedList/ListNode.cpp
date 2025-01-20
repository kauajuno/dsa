#include "ListNode.hpp"

ListNode::ListNode(int x) : val(x), next(nullptr) {};

int ListNode::getVal() const {
    return val;
}

void ListNode::setVal(int x) {
    val = x;
}

ListNode* ListNode::getNext() const {
    return next;
}

void ListNode::setNext(ListNode* node) {
    next = node;
}
