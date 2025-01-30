#include <iostream>
#include <string>
using namespace std;

//Struktura për të ruajtur informacionet e ndeshjes
struct Ndeshja{
    string ekipi1;
    string ekipi2;
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

//Funksioni për të regjistruar rezultatin
void regjistroRezultatin(Ndeshja & ndeshja){
    cout << "Jepni rezultatin e ekipit " << ndeshja.ekipi1 << ": ";
    cin >> ndeshja.rezultatiEkipi1;
    cout << "Jepni rezultatin e ekipit " << ndeshja.ekipi2 << ": ";
    cin >> ndeshja.rezultatiEkipi2;
}

/*TODO:
2. Funksioni për të afishuar informacionin e ndeshjes
3. Thirja e funksioneve dhe implementimi i menusë
*/