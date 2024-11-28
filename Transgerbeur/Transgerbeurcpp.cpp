#include <iostream>
#include <cstdio>
using namespace std;

// Énumération pour l'état du contenu
enum EEtat { vide, palette, rouleau};

// Union pour le contenu du casier
union UContenu {
    SPalette palette; 
    SRouleau rouleau;

};

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
	cout << "Transbergeur" << endl;
}