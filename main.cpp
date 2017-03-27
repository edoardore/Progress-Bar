#include <iostream>
#include "FileManage.h"
#include "ProgressBar.h"

void carica(FileManage *ptr) {
    Risorse *risorsa[5];
    risorsa[0] = new Risorse("Risorsa_1", 4);
    risorsa[1] = new Risorse("Risorsa_02", 8);
    risorsa[2] = new Risorse("Risorsa_03", 16);
    risorsa[3] = new Risorse("Risorsa_04", 4);
    risorsa[4] = new Risorse("Risorsa_05", 4);
}

int main() {
    FileManage *ptr = new FileManage;
    ProgressBar barra(ptr);
    barra.attach();
    carica(ptr);
}