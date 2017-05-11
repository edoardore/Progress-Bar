//
// Created by Edoardo Re on 23/03/17.
//

#include "ProgressBar.h"
#include <string>
#include <ncurses.h>

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
    if (Grafica::getBUp() < 101) {
        for (int i = 0; i < Grafica::getBUp(); i++) {
            mvwprintw(progressbar, 3, i + 6, "", 97);
            waddch(progressbar, 97 | ACS_BULLET);
        }
        wattroff(progressbar, A_STANDOUT);
        mvwprintw(progressbar, 5, 80, "Percentuale bit: %d %%", Grafica::getBUp());
        mvwprintw(progressbar, 6, 80, "Percentuale File: %d %%", Grafica::getFUp());
        mvwprintw(progressbar, 5, 6, "File: %s", Grafica::getCurrentName().c_str());
        wrefresh(progressbar);
        wgetch(progressbar);
    }
    refresh();
    if (Grafica::getBUp() == 100) {
        mvwprintw(progressbar, 1, 3, "              ");
        mvwprintw(progressbar, 1, 40, "CARICAMENTO COMPLETATO!");
        mvwprintw(progressbar, 5, 6, "Premi qualsiasi tasto per uscire.");
        wrefresh(progressbar);
        getch();
        endwin();
    }
}