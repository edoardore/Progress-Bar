//
// Created by Edoardo Re on 23/03/17.
//

#include "ProgressBar.h"
#include <string>
#include <ncurses.h>

//inizializzazione della finestra per la barra
ProgressBar::ProgressBar(FileManage *s) : Grafica::Grafica(s) {
    initscr();
    curs_set(0);
    noecho();
    progressbar = newwin(10, 114, 17, 22);
    setBUp(0);
    setFUp(0);
    setCurrentName("Unknown");
}

ProgressBar::~ProgressBar() {
    detach();
}

void ProgressBar::disegna() {
    //TODO da implementare (mostrerà la progressbar su schermo)
}