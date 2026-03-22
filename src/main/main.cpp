// Fișier: src/main.cpp
#include <iostream>
#include <vector>
#include "Vehicule.h" // Includem header-ul cu clasele

int main() {
    std::cout << "--- Start Simulare Trafic ---\n";

    std::vector<Vehicul*> trafic;
    trafic.push_back(new Masina("B-123-ABC"));
    trafic.push_back(new Camion("SV-99-TRK"));

    for (Vehicul* v : trafic) {
        v->avanseaza();
        v->reactioneazaLaIntersectie();
    }

    for (Vehicul* v : trafic) {
        delete v;
    }

    return 0;
}
