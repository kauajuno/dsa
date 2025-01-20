#ifndef LISTNODE_H
#define LISTNODE_H

class ListNode{
    private:
        int val;
        ListNode* next;

    public:

    ListNode(int x);

    int getVal() const;
    void setVal(int val);

    ListNode* getNext() const;
    void setNext(ListNode* node);
};

#endif