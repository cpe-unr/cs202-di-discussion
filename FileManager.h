//
// Created by Keith Lancaster on 4/27/21.
//

#ifndef DI_CLASS_FILEMANAGER_H
#define DI_CLASS_FILEMANAGER_H


#include <string>
#include "Buffer.h"

class FileManager {
    Buffer* buffer;
public:
    FileManager(std::string fileName);

    Buffer* getBuffer();
};


#endif //DI_CLASS_FILEMANAGER_H
