// Fișier: src/Vehicule.h
#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>

class Vehicul {
protected:
    std::string id;
    int vitezaMaxima;
public:
    Vehicul(std::string id, int vMax) : id(id), vitezaMaxima(vMax) {}
    virtual ~Vehicul() = default;

    virtual void avanseaza() = 0;
    virtual void reactioneazaLaIntersectie() = 0;

    std::string getId() const { return id; }
    int getVitezaMaxima() const { return vitezaMaxima; }
};

class Masina : public Vehicul {
public:
    Masina(std::string id) : Vehicul(id, 130) {}
    void avanseaza() override {
        std::cout << "[LOG] Masina " << id << " avanseaza pe strada (Vmax: " << vitezaMaxima << " km/h).\n";
    }
    void reactioneazaLaIntersectie() override {
        std::cout << "[LOG] Masina " << id << " a ajuns la intersectie. Asteapta trecerea.\n";
    }
};

class Camion : public Vehicul {
public:
    Camion(std::string id) : Vehicul(id, 90) {}
    void avanseaza() override {
         std::cout << "[LOG] Camionul " << id << " merge incet (Vmax: " << vitezaMaxima << " km/h).\n";
    }
    void reactioneazaLaIntersectie() override {
        std::cout << "[LOG] Camionul " << id << " necesita unghi de viraj mai mare la intersectie.\n";
    }
};

#endif
