//
// Created by Edoardo Re on 11/03/17.
//

#ifndef PROGRESSBAR_OBSERVER_H
#define PROGRESSBAR_OBSERVER_H

#include <string>

class Observer {
public:
    virtual ~Observer() {}

    virtual void update(int bitUpdate, int fileUpdate, std::string fileName)=0;

    virtual void attach()=0;

    virtual void detach()=0;

};


#endif //PROGRESSBAR_OBSERVER_H
