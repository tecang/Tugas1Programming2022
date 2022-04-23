#include "peta.h"
#include <iostream>
using namespace std;
// Petunjuk: Elemen pada double pointer dapat diakses seperti array biasa.
// Misalkan ingin mengakses elemen baris i kolom j, maka cukup buat matrix[i][j]

char** BuatPeta(int n_peta){
    // Buat baris yang berisi pointer ke elemen masing-masing baris
    char** peta = new char*[n_peta];
    // Isi masing-masing baris dengan elemen kolom
    peta[0][0]={'x'};
        
    for(int i=1; i<n_peta; i++){
        peta[i] = new char[n_peta];
        peta[i][0] = {'x'};
        peta[i][n_peta-1] = {'x'};
        if (i==n_peta-1){
            for (int j=1; j<n_peta; j++){
            peta[j] = new char[n_peta];
            peta[i][j]= {'x'};    
            }
        } else{
            for (int j=1; j<n_peta; j++){
            peta[j] = new char[n_peta];
            char peta[i][j]= {'-'};
            }
        }
    } 
    // Isikan elemen ke peta untuk pertama kalinya
    // Silahkan tuliskan implementasi

    return peta;
}

void PrintPeta(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari sisi Depan" << endl;
    for (int i=0; i<n_peta; i++){
        for (int j=0; j<n_peta; j++){
            cout << peta[i][j] << '\n';
        }
    }
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi depan
}

void PrintViewKanan(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari sisi Kanan" << endl;
    for (int i=0; i<n_peta; i++){
        for (int j=0; j<n_peta; j++){
            cout << peta[n_peta-i][n_peta-j] << '\n';
        }
    }
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi kanan
}

void PrintViewKiri(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari sisi Kiri" << endl;
    for (int j=0; j<n_peta; j++){
        for (int i=0; i<n_peta; i++){
            cout << peta[j][i] << '\n';
        }
    }
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi kiri
}