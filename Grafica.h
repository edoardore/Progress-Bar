//
// Created by Edoardo Re on 12/03/17.
//

#ifndef PROGRESSBAR_GRAFICA_H
#define PROGRESSBAR_GRAFICA_H


#include "Observer.h"
#include <iostream>
#include "FileManage.h"

class Grafica : public Observer {
public:
    virtual ~Grafica();

    virtual void disegna();

    virtual void attach() override;

    virtual void detach() override;

    virtual void update(int bitUpdate, int filesUpdate, std::string fileName) override;

    int getBUp() const;

    void setBUp(int bUpdate);

    int getFUp() const;

    void setFUp(int fUpdate);

    void setCurrentName(const std::string &currentName);

    const std::string &getCurrentName() const;


private:
    int bUpdate, fUpdate;
    std::string currentName;
    FileManage *subject;
};


#endif //PROGRESSBAR_GRAFICA_H
