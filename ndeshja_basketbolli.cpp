#include <iostream>
#include <string>
using namespace std;

//Struktura për të ruajtur informacionet e ndeshjes
struct Ndeshja{
    string ekipi1;
    string ekipi 2;
    int nrLojtareve;
    int kohaNdeshjes;
    int rezultatiEkipi1;
    int rezultatiEkipi2;
};

//Funksioni për inicializimin e ndeshjes
void inicializoNdeshjen(Ndeshja & ndeshja){
    cout << "Jepni emrin e ekipit 1:";
    cin >> ndeshja.ekipi1;
    cout << "Jepni emrin e ekipit 2: ";
    cin >> ndeshja.ekipi2;
    cout << "Vendosni numrin e lojtareve per secilin ekip: ";
    cin >> ndeshja.nrLojtareve;
    cout << "Vendosni kohen e ndeshjes (ne minuta): ";
    cin >> ndeshja.kohaNdeshjes; 
}
