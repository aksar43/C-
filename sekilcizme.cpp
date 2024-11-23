#include <iostream>

using std :: cout ;
using std :: cin ;
using std :: endl ;

/*istenen aralikta düz üçgen çizmek için kodları yazdık*/
void duzUcgenCiz (int n) {
    if (n < 3 || n > 15 || n % 2 == 0) return;

    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
}

/*Ters üçgen için verilen kod*/
void tersUcgenCiz(int n) {
    if (n < 3 || n > 15 || n % 2 == 0) return;

    for (int i = n; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
}

/*Elmas çizmek için yukarıdaki kodda çizdiğimiz üst ve alt üçgeni tek bir kodda birleştirdik.
*/
void elmasCiz (int n) {
    if (n < 3 || n > 15 || n % 2 == 0) return;

    
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int Kullanici_secim;
    int n;

    while (true) {
        cout << "Cizmek istediginiz sekli secin:\n";
        cout << "1. Duz Ucgen\n";
        cout << "2. Ters Ucgen\n";
        cout << "3. Elmas\n";
        cout << "4. Cikis\n";
        cout << "Secim: ";
        cin >> Kullanici_secim;

        if (Kullanici_secim == 4) {
            cout << "Programdan cikiliyor.\n";
            break;
        }

        cout << "n degerini girin (3-15 arasi tek sayi): ";
        cin >> n;
    cout << endl;

        switch (Kullanici_secim) {
            case 1:
                duzUcgenCiz (n);
                break;
            case 2:
                tersUcgenCiz(n);
                break;
            case 3:
                elmasCiz (n);
                break;
            default:
                cout << "Gecersiz secim. Tekrar deneyin.\n";
        }

        cout << endl;  
    }

    return 0;
}