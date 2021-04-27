//
// Created by Keith Lancaster on 4/27/21.
//

#include "Processor.h"
#include <iostream>
#include <utility>

Processor::Processor(const std::string& fileName):fileManager(fileName) {
}

void Processor::doProcess() {
    std::cout << "in doProcess" << std::endl;
    algorithm.run(fileManager.getBuffer());

}
