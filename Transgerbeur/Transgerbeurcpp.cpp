#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// Énumération pour l'état du contenu
enum EEtat { vide, palette, rouleau };

// Structure pour Palette
struct SPalette {
    int poids;
    char reference[20];
};

// Structure pour Rouleau
struct SRouleau {
    float longueur;
    int numero;
};

// Union pour le contenu du casier
union UContenu {
    SPalette palette;
    SRouleau rouleau;
};

// Structure pour Casier
struct SCasier {
    int x;
    int y;
    EEtat etat;
    UContenu contenu;
};

SCasier transgerbeur[9];

int main()
{
    // Déclaration et initialisation d'un rouleau
    SRouleau ro1;
    ro1.longueur = 12.34;
    ro1.numero = 101;

    // Déclaration d'une palette
    SPalette pa1;
    pa1.poids = 200;
    // Utilisation de strcpy_s
    strcpy_s(pa1.reference, 20, "PALETTE_REF_001");

    // Déclaration et initialisation d'un état
    EEtat etatC1 = vide;

    // Déclaration et initialisation
    UContenu cont;
    cont.palette = pa1;
    cont.rouleau = ro1;

    // Déclaration d'un casier c1
    SCasier c1;
    c1.x = 2;
    c1.y = 3;
    c1.etat = palette;
    c1.contenu.palette = pa1;

    // Déclaration et initialisation d'un casier c2 avec une palette
    SCasier c2;
    c2.x = 4; 
    c2.y = 5; 
    c2.etat = palette;
    c2.contenu.palette = pa1;

    // Déclaration d'un tableau de casiers
    SCasier tableauCasier[9];
    tableauCasier[0] = c1;
    tableauCasier[2] = c2;
}
