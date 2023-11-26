//POSTDAY MODUL 2 13022004 Hans Morgan
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

void lokasi(int sumx, int sumy) {
    cout << "(" << sumx << "," << sumy << ")" << endl;
}

void gerak(int &sumx, int &sumy, int nilai[2]) {
    sumx += nilai[0];
    sumy += nilai[1];
}

void gerak_2(int &sumx, int &sumy, double v, double t, double theta) {
    // Convert theta to radians
    double theta_rad = theta * (PI / 180.0);

    // Calculate the new position based on velocity, time, and angle
    sumx += static_cast<int>(v * t * cos(theta_rad));
    sumy += static_cast<int>(v * t * sin(theta_rad));
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

    cout << "Func: GO, GO2, CHECK, SAVE, LOAD, SKIP)" << endl;

    while (!(command == "SKIP")) {
        cin >> command;

        if (command == "GO") {
            cout << "Masukkan arah x dan arah y: ";
            int nilai[2];
            for (int i = 0; i < 2; i++) {
                cin >> nilai[i];
            }
            gerak(sumx, sumy, nilai);
        } else if (command == "GO2") {
            double v, t, theta;
            cout << "Masukkan kecepatan (v), waktu (t), dan sudut (theta) dalam derajat: ";
            cin >> v >> t >> theta;
            gerak_2(sumx, sumy, v, t, theta);
        } else if (command == "CHECK") {
            cout << "POSISI DRONE SEKARANG DI ";
            lokasi(sumx, sumy);
        } else if (command == "SAVE") {
            save(sumx, sumy);
        } else if (command == "LOAD") {
            load(sumx, sumy);
        } else if (!(command == "SKIP")) {
            cout << "Tulis GO untuk lanjut, GO2 untuk simulasi gerak, CHECK untuk cek lokasi, SAVE untuk simpan koordinat, LOAD untuk muat koordinat, & SKIP untuk stop" << '\n';
        }
    }
    cout << "DRONE SELESAI DENGAN POSISI TERAKHIR DI (" << sumx << "," << sumy << ")" << endl;
    return 0;
}
