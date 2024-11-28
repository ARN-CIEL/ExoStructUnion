#include <iostream>

using namespace std;
enum EEtat {
    vide, palette, rouleau
};
struct SPalette
{
    int poids;
    char ref[20];
};
struct SRouleau {
    float longeur;
    int numero;
};
union Ucontenu {
    SPalette palette;
    SRouleau rouleau;
};
struct SCasier {
    int px;
    int py;
    SPalette palette;
    SRouleau rouleau;
};
int main() {
    cout << "Le programe Transgerbeur" << endl;
    // Initialisation d'une palette
    SPalette pa1;
    pa1.poids = 101;
    strcpy_s(pa1.ref, "ref1"); // Utilisation de strcpy pour initialiser la chaîne

    // Initialisation d'un rouleau
    SRouleau ro1{ 20.5, 42 };

    // Gestion de l'état et du contenu
    EEtat etatC1 = vide;
    Ucontenu cont;
    cont.rouleau = ro1; // Stockage d'un rouleau dans l'union

    // Initialisation de casiers
    SCasier c1;
    c1.palette = pa1;
    c1.rouleau = ro1;
    c1.px = 2;
    c1.py = 3;

    SCasier c2;
    c2.palette = pa1;
    c2.rouleau = ro1;
    c2.px = 4;
    c2.py = 5;

    // Tableau de casiers
    SCasier casier[9];
    casier[0] = c1;
    casier[1] = c2;
    // Affichage des tailles
    cout << "Taille de Palette : " << sizeof(SPalette) << " octets" << endl;
    cout << "Taille de Rouleau : " << sizeof(SRouleau) << " octets" << endl;
    cout << "Taille de contenu : " << sizeof(Ucontenu) << " octets" << endl;
    cout << "Taille de Casier : " << sizeof(SCasier) << " octets" << endl;
    cout << "Taille du tableau de casiers : " << sizeof(casier) << " octets" << endl;

    return 0;

}