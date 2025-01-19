#ifndef AVLNODE_H
#define AVLNODE_H

class AVLNode {
private:
    int val;
    AVLNode* left;
    AVLNode* right;
    int height;

public:
    AVLNode(int x);

    int getVal() const;
    int getHeight() const;
    AVLNode* getLeft() const;
    AVLNode* getRight() const;
    void setVal(int x);
    void setHeight(int x);
    void setLeft(AVLNode* node);
    void setRight(AVLNode* node);
};

#endif