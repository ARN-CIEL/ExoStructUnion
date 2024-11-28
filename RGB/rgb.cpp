#include <iostream>
#include <iomanip>

using namespace std;

// Definition de la structure et de l'union
struct Srgb
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

union UColor
{
    unsigned int val;
    Srgb components;
    unsigned char tabCol[3];
};

// Fonction principale
int main()
{
    UColor color;

    // Saisie de la valeur hexadécimale
    cout << "Entrez une valeur de couleur en hexadecimal (ex: FF1122) : ";
    cin >> hex >> color.val;
    cout << endl;

    // Affichage de la valeur hexadécimale et des composantes RGB
    cout << "Valeur en hexadecimale : " << hex << color.val << endl;
    cout << endl;
    cout << "Composantes RGB :" << endl;
    cout << "R : 0x" << hex << static_cast<int>(color.components.r) << endl;
    cout << "G : 0x" << hex << static_cast<int>(color.components.g) << endl;
    cout << "B : 0x" << hex << static_cast<int>(color.components.b) << endl;

    return 0;
}
