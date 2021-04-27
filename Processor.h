//
// Created by Keith Lancaster on 4/27/21.
//

#ifndef DI_CLASS_PROCESSOR_H
#define DI_CLASS_PROCESSOR_H


#include <string>
#include "Algorithm.h"
#include "FileManager.h"

class Processor {
private:
    Algorithm algorithm;
    FileManager fileManager;
public:
    explicit Processor(const std::string& fileName);
public:
    void doProcess();
};


#endif //DI_CLASS_PROCESSOR_H
