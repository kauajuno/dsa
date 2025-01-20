#include "AVLTree.hpp"
#include <algorithm>

AVLTree::AVLTree() : root(nullptr) {}

AVLTree::~AVLTree() {
    
}

int AVLTree::height(AVLNode* node) {
    return node ? node->getHeight() : 0;
}

int AVLTree::getBalance(AVLNode* node) {
    return node ? height(node->getLeft()) - height(node->getRight()) : 0;
}

AVLNode* AVLTree::rightRotate(AVLNode* y) {
    AVLNode* x = y->getLeft();
    AVLNode* T2 = x->getRight();

    x->setRight(y);
    y->setLeft(T2);

    y->setHeight(std::max(height(y->getLeft()), height(y->getRight())) + 1);
    x->setHeight(std::max(height(x->getLeft()), height(x->getRight())) + 1);

    return x;
}

AVLNode* AVLTree::leftRotate(AVLNode* x) {
    AVLNode* y = x->getRight();
    AVLNode* T2 = y->getLeft();

    y->setLeft(x);
    x->setRight(T2);

    x->setHeight(1 + std::max(height(x->getLeft()), height(x->getRight())));
    y->setHeight(1 + std::max(height(y->getLeft()), height(y->getRight())));

    return y;
}

AVLNode* AVLTree::insert(AVLNode* node, int key) {
    if (node == nullptr)
        return new AVLNode(key);

    if (key < node->getVal())
        node->setLeft(insert(node->getLeft(), key));
    else if (key > node->getVal())
        node->setRight(insert(node->getRight(), key));
    else
        return node;

    node->setHeight(1 + std::max(height(node->getLeft()), height(node->getRight())));

    int balance = getBalance(node);

    // left left case
    if (balance > 1 && key < node->getLeft()->getVal())
        return rightRotate(node);

    // right right case
    if (balance < -1 && key > node->getRight()->getVal())
        return leftRotate(node);

    // left right case
    if (balance > 1 && key > node->getLeft()->getVal()) {
        node->setLeft(leftRotate(node->getLeft()));
        return rightRotate(node);
    }

    // right left case
    if (balance < -1 && key < node->getRight()->getVal()) {
        node->setRight(rightRotate(node->getRight()));
        return leftRotate(node);
    }


    return node;
}

void AVLTree::insert(int key) {
    root = insert(root, key);
}