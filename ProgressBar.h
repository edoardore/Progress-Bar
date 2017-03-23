//
// Created by Edoardo Re on 23/03/17.
//

#ifndef PROGRESSBAR_PROGRESSBAR_H
#define PROGRESSBAR_PROGRESSBAR_H

#include <list>
#include "Grafica.h"
#include "FileManage.h"
#include "Risorse.h"

class ProgressBar : public Grafica, public Disp {
public:
    virtual ~ProgressBar();

    ProgressBar(FileManage *s);

    virtual void disegna() override;

private:

    //TODO

};


#endif //PROGRESSBAR_PROGRESSBAR_H
