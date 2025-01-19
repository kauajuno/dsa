#include "AVLNode.hpp"
#include <iostream>

int main(){
    AVLNode* root = new AVLNode(10);

    root->setLeft(new AVLNode(5));
    root->setRight(new AVLNode(15));
    std::cout << root->getVal() << std::endl;
}

