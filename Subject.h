//
// Created by Edoardo Re on 11/03/17.
//

#ifndef PROGRESSBAR_SUBJECT_H
#define PROGRESSBAR_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void subscribe(Observer *o)=0;

    virtual void unsubscribe(Observer *o)=0;

    virtual void notify(int bitPercentuale, int filesPercentuale, std::string fileName)=0;

};


#endif //PROGRESSBAR_SUBJECT_H
