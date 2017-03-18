//
// Created by Edoardo Re on 18/03/17.
//

#ifndef PROGRESSBAR_RISORSE_H
#define PROGRESSBAR_RISORSE_H


#include <string>

class Risorse {
public:
    Risorse(std::string name, int b);

    const std::string &getFileName() const;

    int getBit() const;

private:
    std::string fileName;
    int bit;

};


#endif //PROGRESSBAR_RISORSE_H
