//
// Created by Edoardo Re on 12/03/17.
//

#include "Grafica.h"
#include <iostream>

Grafica::Grafica(FileManage *f) : subject(f), bUpdate(0), fUpdate(0), currentName("Unknown") {}

Grafica::~Grafica() {
    detach();
}

void Grafica::disegna() {

}

void Grafica::attach() {
    subject->subscribe(this);
}

void Grafica::detach() {
    subject->unsubscribe(this);
}

void Grafica::update(int bitUpdate, int filesUpdate, std::string fileName) {
    bUpdate = bitUpdate;
    fUpdate = filesUpdate;
    currentName = fileName;
    disegna();
}

int Grafica::getBUp() const {
    return bUpdate;
}

void Grafica::setBUp(int bUpdate) {
    Grafica::bUpdate = bUpdate;
}

int Grafica::getFUp() const {
    return fUpdate;
}

void Grafica::setFUp(int fUpdate) {
    Grafica::fUpdate = fUpdate;
}

void Grafica::setCurrentName(const std::string &currentName) {
    Grafica::currentName = currentName;
}

const std::string &Grafica::getCurrentName() const {
    return currentName;
}