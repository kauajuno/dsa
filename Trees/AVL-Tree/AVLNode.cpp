#include "AVLNode.hpp"

AVLNode::AVLNode(int x) : val(x), left(nullptr), right(nullptr), height(1) {};

int AVLNode::getVal() const {
    return val;
}

int AVLNode::getHeight() const {
    return height;
}

AVLNode* AVLNode::getLeft() const {
    return left;
}

AVLNode* AVLNode::getRight() const {
    return right;
}

void AVLNode::setVal(int x) {
    val = x;
}

void AVLNode::setHeight(int x) {
    height = x;
}

void AVLNode::setLeft(AVLNode* node) {
    left = node;
}

void AVLNode::setRight(AVLNode* node) {
    right = node;
}
