#include <iostream>
#include "Processor.h"

int main() {
    Processor processor("testfile.wav");
    processor.doProcess();
    return 0;
}
