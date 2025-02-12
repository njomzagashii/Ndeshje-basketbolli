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
// Funksioni për të afishuar informacionin e ndeshjes
void afishoNdeshjen(const Ndeshja &ndeshja) {
    cout << "\n--- Informacioni i Ndeshjes ---" << endl;
    cout << "Ekipi 1: " << ndeshja.ekipi1 << endl;
    cout << "Ekipi 2: " << ndeshja.ekipi2 << endl;
    cout << "Numri i Lojtareve: " << ndeshja.nrLojtareve << endl;
    cout << "Koha e Ndeshjes: " << ndeshja.kohaNdeshjes << " minuta" << endl;
    cout << "Rezultati: " << ndeshja.ekipi1 << " " << ndeshja.rezultatiEkipi1
         << " - " << ndeshja.rezultatiEkipi2 << " " << ndeshja.ekipi2 << endl;
    if (ndeshja.rezultatiEkipi1 > ndeshja.rezultatiEkipi2) {
        cout << "Fituesi: " << ndeshja.ekipi1 << endl;
    } else if (ndeshja.rezultatiEkipi1 < ndeshja.rezultatiEkipi2) {
        cout << "Fituesi: " << ndeshja.ekipi2 << endl;
    } else {
        cout << "Rezultati: Barazim!" << endl;
    }
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
int main() {
    Ndeshja ndeshja;
    int zgjedhja;

    do {
        cout << "\n--- Menuja ---" << endl;
        cout << "1. Inicializo ndeshjen" << endl;
        cout << "2. Regjistro rezultatin" << endl;
        cout << "3. Afisho informacionin e ndeshjes" << endl;
        cout << "4. Dil" << endl;
        cout << "Zgjedhja juaj: ";
        cin >> zgjedhja;

        switch (zgjedhja) {
            case 1:
                inicializoNdeshjen(ndeshja);
                break;
            case 2:
                regjistroRezultatin(ndeshja);
                break;
            case 3:
                afishoNdeshjen(ndeshja);
                break;
            case 4:
                cout << "Po dilni nga programi. Faleminderit!" << endl;
                break;
            default:
                cout << "Zgjedhje e pavlefshme. Ju lutem provoni perseri." << endl;
  }
    } while (zgjedhja != 4);

return 0;

}


