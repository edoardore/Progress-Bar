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
    progressbar = newwin(8, 112, 15, 20);
    setBUp(0);
    setFUp(0);
    setCurrentName("Unknown");
}

ProgressBar::~ProgressBar() {
    detach();
}

void ProgressBar::disegna() {
    box(progressbar, ACS_VLINE, ACS_HLINE);
    mvwprintw(progressbar, 1, 3, "CARICAMENTO...");
    wtimeout(progressbar, 500);
    wattron(progressbar, A_STANDOUT);
    //TODO da implementare (mostrerà la progressbar su schermo)
}