//
// Created by Keith Lancaster on 4/27/21.
//

#include "FileManager.h"
#include "Buffer.h"

Buffer *FileManager::getBuffer() {
    return buffer;
}

FileManager::FileManager(std::string fileName) {
    buffer = new Buffer();
}
