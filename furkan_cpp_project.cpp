#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Sayýsal Yöntemler: Karekök bulma (Bisection benzeri basit mantýk)
void hesaplaKarekok() {
    double sayi;
    cout << "Karekoku alinacak sayi: ";
    cin >> sayi;
    if (sayi < 0) cout << "Hata: Negatif sayi!" << endl;
    else cout << "Sonuc: " << sqrt(sayi) << endl;
}

// STL ve Algoritma Kullanýmý: Veri Sýralama
void veriAnalizi() {
    vector<double> veriler;
    int adet;
    double gecici;

    cout << "Kac adet veri gireceksiniz? ";
    cin >> adet;

    for(int i = 0; i < adet; i++) {
        cout << i+1 << ". Veri: ";
        cin >> gecici;
        veriler.push_back(gecici);
    }

    // C++ STL Algoritmasý ile sýralama
    sort(veriler.begin(), veriler.end());

    cout << "\nSiralanmis Muhendislik Verileri: ";
    for (int i = 0; i < veriler.size(); i++) {
    cout << veriler[i] << " ";
}
    cout << endl;
}

int main() {
    int secim;
    do {
        cout << "\n--- CPP MUHENDISLIK ARACLARI ---" << endl;
        cout << "1. Karekok Hesapla (Math)\n2. Veri Sirala (STL Sort)\n3. Cikis\nSecim: ";
        cin >> secim;

        switch(secim) {
            case 1: hesaplaKarekok(); break;
            case 2: veriAnalizi(); break;
        }
    } while(secim != 3);

    return 0;
}
