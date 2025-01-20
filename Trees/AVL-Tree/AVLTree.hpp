#ifndef AVLTREE_HPP
#define AVLTREE_HPP

#include "AVLNode.hpp"

class AVLTree {
private:
    AVLNode* root;

    int height(AVLNode* node);
    int getBalance(AVLNode* node);
    AVLNode* rightRotate(AVLNode* node);
    AVLNode* leftRotate(AVLNode* node);
    AVLNode* insert(AVLNode* node, int key);
    AVLNode* minValueNode(AVLNode* node);
    AVLNode* deleteNode(AVLNode* root, int key);

public:
    AVLTree();
    ~AVLTree();

    void insert(int key);
    void deleteKey(int key);
    AVLNode* search(int key);

    void inOrder();
    void preOrder();
    void postOrder();

    void inOrderHelper(AVLNode* root);
    void preOrderHelper(AVLNode* root);
    void postOrderHelper(AVLNode* root);
};

#endif