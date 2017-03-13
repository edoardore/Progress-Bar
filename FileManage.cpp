//
// Created by Edoardo Re on 13/03/17.
//

#include "FileManage.h"
#include <iostream>

FileManage::FileManage() : fileCaricati(0), bitCaricati(0) {

}

FileManage::~FileManage() {

}

void FileManage::caricaFiles() {
    //TODO metodo che carica file...
}

void FileManage::subscribe(Observer *o) {
    observers.push_back(o);
}

void FileManage::unsubscribe(Observer *o) {
    observers.remove(o);
}

void FileManage::notify(int bitPercentuale, int filesPercentuale, std::string fileName) {
    for (auto itr = std::begin(observers); itr != std::end(observers); itr++) {
        (*itr)->update(bitPercentuale, filesPercentuale, fileName);
    }
}

int FileManage::getFileCaricati() const {
    return fileCaricati;
}

const std::list<Observer *> &FileManage::getObservers() const {
    return observers;
}

int FileManage::getBitCaricati() const {
    return bitCaricati;
}