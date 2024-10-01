#include "HuffmanNode.h"
#include "HuffmanTree.h"
#include "PgmHandler.h"
#include <iostream>
#include <vector>
#include <map>
#include <chrono>

using namespace std;
using namespace chrono;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Usage: \n";
        cout << "  To compress: " << argv[0] << " -c <input.pgm> <output.hc>\n";
        cout << "  To decompress: " << argv[0] << " -d <input.hc> <output.pgm>\n";
        return 1;
    }

    string operation = argv[1];
    string inputFilename = argv[2];
    string outputFilename = (argc > 3) ? argv[3] : "test.hc";

    vector<int> pixels;
    map<int, int> frequencies;
    int width, height;

    auto start = high_resolution_clock::now();

    if (operation == "-c") {
        // Compression workflow
        readPgmFile(inputFilename, pixels, width, height, frequencies);
        HuffmanNode* root = buildHuffmanTree(frequencies);
        map<int, string> huffmanCode;
        storeCodes(root, "", huffmanCode);
        // Further operations...
        deleteTree(root);
    } else if (operation == "-d") {
        // Decompression workflow
        // Your decompression logic here
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Execution Time: " << duration.count() << " milliseconds\n";

    return 0;
}
