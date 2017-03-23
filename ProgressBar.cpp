//
// Created by Edoardo Re on 23/03/17.
//

#include "ProgressBar.h"

ProgressBar::ProgressBar(FileManage *s) : Grafica::Grafica(s) {
    //TODO utilizzo di ncurses
}


ProgressBar::~ProgressBar() {
    detach();
}

void ProgressBar::disegna() {
    //TODO da implementare (mostrerà la progressbar su schermo)
}