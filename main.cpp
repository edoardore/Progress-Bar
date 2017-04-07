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
}

int main() {
    FileManage *ptr = new FileManage;
    ProgressBar barra(ptr);
    barra.attach();
    carica(ptr);
}