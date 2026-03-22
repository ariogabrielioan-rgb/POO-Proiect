// Fișier: tests/test_vehicule.cpp
#include <iostream>
#include <cassert>
#include "F:\POO\proiect-cpp\src\main\Vehicule.h" // Calea relativă către header-ul cu clase

void test_creare_masina() {
    Masina m("B-123-ABC");
    assert(m.getId() == "B-123-ABC");
    assert(m.getVitezaMaxima() == 130);
    std::cout << "[OK] test_creare_masina trecut cu succes.\n";
}

void test_creare_camion() {
    Camion c("SV-99-TRK");
    assert(c.getId() == "SV-99-TRK");
    assert(c.getVitezaMaxima() == 90);
    std::cout << "[OK] test_creare_camion trecut cu succes.\n";
}

void test_polimorfism_simplu() {
    Vehicul* v1 = new Masina("CJ-10-TST");
    assert(v1->getVitezaMaxima() == 130);

    Vehicul* v2 = new Camion("IS-20-TST");
    assert(v2->getVitezaMaxima() == 90);

    delete v1;
    delete v2;
    std::cout << "[OK] test_polimorfism_simplu trecut cu succes.\n";
}

int main() {
    std::cout << "--- Rulare Teste Unitare ---\n";
    test_creare_masina();
    test_creare_camion();
    test_polimorfism_simplu();
    std::cout << "--- Toate testele au trecut cu succes! ---\n";
    return 0;
}
