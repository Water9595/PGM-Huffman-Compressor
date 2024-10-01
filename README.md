# PGM-Huffman-Compressor
PGM Huffman Compressor is a C++ program that compresses and decompresses PGM image files using Huffman encoding. The project includes functionalities to efficiently encode image data into a compressed format and restore it to the original PGM format, optimizing storage space while maintaining image quality.

## Features

- **Compression**: Compresses a PGM image file into a smaller binary file using Huffman encoding.
- **Decompression**: Decompresses a Huffman-encoded file back into its original PGM format.

## How to Use

### Compilation

To compile the program, use the following command (assuming you have `g++` installed):
`g++ -o HuffmanCompression main.cpp src/*.cpp`

### Usage
#### Compress a PGM Image:
`./HuffmanCompression -c <input.pgm> <output.hc>`

#### Decompress a Huffman-encoded File:
`./HuffmanCompression -d <input.hc> <output.pgm>`

### Example:
To compress `test.pgm` into `test.hc`:
`./HuffmanCompression -c test.pgm test.hc`

To decompress `test.hc` back into a PGM file:
`./HuffmanCompression -d test.hc testd.pgm`

### File Descriptions
- `HuffmanNode.h`: Defines the Huffman tree node structure.
- `HuffmanTree.h`: Contains functions to build the Huffman tree and generate Huffman codes.
- `PgmHandler.h`: Manages reading and writing of PGM image files.
- `HuffmanCompression.cpp`: Core logic for the Huffman encoding and decoding algorithms.
- `main.cpp`: The main driver program for compression and decompression operations.

## Example Workflow

### Compressing an Image:
1. Read the PGM file.
2. Build the Huffman tree based on pixel frequency.
3. Generate the Huffman codes.
4. Encode the image into a binary format.
5. Write the compressed file to disk.

### Decompressing an Image:
1. Read the Huffman-encoded file.
2. Traverse the Huffman tree to decode each pixel.
3. Write the decoded image back to a PGM file.
