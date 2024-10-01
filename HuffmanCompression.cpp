#include "HuffmanNode.h"
#include "HuffmanTree.h"
#include "PgmHandler.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <queue>
#include <string>

HuffmanNode::HuffmanNode(int value, unsigned freq) {
    left = right = nullptr;
    this->value = value;
    this->freq = freq;
}

void deleteTree(HuffmanNode* node) {
    if (node == nullptr) return;
    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}

// Implementation of other functions (buildHuffmanTree, storeCodes, readPgmFile, etc.) should be moved here.
