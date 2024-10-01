#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H

struct HuffmanNode {
    int value;
    unsigned freq;
    HuffmanNode* left, * right;

    HuffmanNode(int value, unsigned freq);
};

void deleteTree(HuffmanNode* node);

#endif
