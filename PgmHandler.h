#ifndef PGMHANDLER_H
#define PGMHANDLER_H

#include <vector>
#include <string>
#include <map>

void readPgmFile(const std::string& filename, std::vector<int>& pixels, int& width, int& height, std::map<int, int>& frequencies);
void writeDecodedImageToPgm(const std::vector<int>& decodedPixels, const std::string& outputFilename, int width, int height);

#endif
