#include <iostream>
#include "FileManage.h"
#include "ProgressBar.h"

void carica(FileManage *ptr) {
    Risorse *risorsa[15];
    risorsa[0] = new Risorse("Risorsa_01", 4);
    risorsa[1] = new Risorse("Risorsa_02", 8);
    risorsa[2] = new Risorse("Risorsa_03", 16);
    risorsa[3] = new Risorse("Risorsa_04", 4);
    risorsa[4] = new Risorse("Risorsa_05", 4);
    risorsa[5] = new Risorse("Risorsa_06", 16);
    risorsa[6] = new Risorse("Risorsa_07", 8);
    risorsa[7] = new Risorse("Risorsa_08", 16);
    risorsa[8] = new Risorse("Risorsa_09", 32);
    risorsa[9] = new Risorse("Risorsa_10", 4);
    risorsa[10] = new Risorse("Risorsa_11", 16);
    risorsa[11] = new Risorse("Risorsa_12", 4);
    risorsa[12] = new Risorse("Risorsa_13", 4);
    risorsa[13] = new Risorse("Risorsa_14", 8);
    risorsa[14] = new Risorse("Risorsa_15", 8);
    ptr->storeRisorse(risorsa[0]);
    ptr->storeRisorse(risorsa[1]);
    ptr->storeRisorse(risorsa[2]);
    ptr->storeRisorse(risorsa[3]);
    ptr->storeRisorse(risorsa[4]);
    ptr->storeRisorse(risorsa[5]);
    ptr->storeRisorse(risorsa[6]);
    ptr->storeRisorse(risorsa[7]);
    ptr->storeRisorse(risorsa[8]);
    ptr->storeRisorse(risorsa[9]);
    ptr->storeRisorse(risorsa[10]);
    ptr->storeRisorse(risorsa[11]);
    ptr->storeRisorse(risorsa[12]);
    ptr->storeRisorse(risorsa[13]);
    ptr->storeRisorse(risorsa[14]);
    ptr->caricaFiles();
}

int main() {
    FileManage *ptr = new FileManage;
    ProgressBar bar(ptr);
    bar.attach();
    carica(ptr);
}