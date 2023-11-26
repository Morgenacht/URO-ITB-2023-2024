//POSTDAY MODUL 2 13022004 Hans Morgan
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void lokasi(int sumx, int sumy) {
    cout << "(" << sumx << "," << sumy << ")" << endl;
}

void gerak(int &sumx, int &sumy, int nilai[2]) {
    sumx += nilai[0];
    sumy += nilai[1];
}

void save(int sumx, int sumy) {
    ofstream file("koordinat_drone.txt");
    if (file.is_open()) {
        file << sumx << " " << sumy;
        file.close();
        cout << "Koordinat berhasil disimpan ke file." << endl;
    } else {
        cout << "Gagal membuka file untuk penyimpanan koordinat." << endl;
    }
}

void load(int &sumx, int &sumy) {
    ifstream file("koordinat_drone.txt");
    if (file.is_open()) {
        file >> sumx >> sumy;
        file.close();
        cout << "Koordinat berhasil dimuat dari file." << endl;
    } else {
        cout << "Gagal membuka file untuk memuat koordinat." << endl;
    }
}

int main() {
    int sumx = 0;
    int sumy = 0;
    string command {};

    cout << "Func: GO, CHECK, SAVE, LOAD, SKIP)" << endl;

    while (!(command == "SKIP")) {
        cin >> command;

        if (command == "GO") {
            cout << "Masukkan arah x dan arah y: ";
            int nilai[2];
            for (int i = 0; i < 2; i++) {
                cin >> nilai[i];
            }
            gerak(sumx, sumy, nilai);
        } else if (command == "CHECK") {
            cout << "POSISI DRONE SEKARANG DI ";
            lokasi(sumx, sumy);
        } else if (command == "SAVE") {
            save(sumx, sumy);
        } else if (command == "LOAD") {
            load(sumx, sumy);
        } else if (!(command == "SKIP")) {
            cout << "Tulis GO untuk lanjut, CHECK untuk cek lokasi, SAVE untuk simpan koordinat, LOAD untuk muat koordinat, & SKIP untuk stop" << '\n';
        }
    }
    cout << "DRONE SELESAI DENGAN POSISI TERAKHIR DI (" << sumx << "," << sumy << ")" << endl;
    return 0;
}
