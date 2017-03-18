//
// Created by Edoardo Re on 18/03/17.
//

#include "Risorse.h"
#include <iostream>



Risorse::Risorse(std::string name, int b) : fileName(name), bit(b) {
}

const std::string &Risorse::getFileName() const {
    return fileName;
}

int Risorse::getBit() const {
    return bit;
}