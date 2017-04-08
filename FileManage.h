//
// Created by Edoardo Re on 13/03/17.
//

#ifndef PROGRESSBAR_FILEMANAGE_H
#define PROGRESSBAR_FILEMANAGE_H


#include "Subject.h"
#include "Risorse.h"
#include <list>
#include <string>

class FileManage : public Subject {
public:
    FileManage();

    virtual ~FileManage();

    void caricaFiles();

    virtual void subscribe(Observer *o) override;

    virtual void unsubscribe(Observer *o) override;

    virtual void notify(int bitPercentuale, int filesPercentuale, std::string fileName) override;

    int getFileCaricati() const;

    const std::list<Observer *> &getObservers() const;

    const std::list<Risorse *> &getFiles() const;

    int getBitCaricati() const;

    void storeRisorse(Risorse *f);

private:

    std::list<Observer *> observers;
    std::list<Risorse *> files;
    int fileCaricati;
    int bitCaricati;

};


#endif //PROGRESSBAR_FILEMANAGE_H
