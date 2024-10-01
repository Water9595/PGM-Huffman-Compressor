#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H

#include "HuffmanNode.h"
#include <map>
#include <string>

HuffmanNode* buildHuffmanTree(const std::map<int, int>& frequencies);
void storeCodes(HuffmanNode* root, std::string str, std::map<int, std::string>& huffmanCode);
void decodeFile(HuffmanNode* root, const std::string& str, std::vector<int>& decodedPixels);

#endif
