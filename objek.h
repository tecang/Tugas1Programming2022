// Silahkan sesuaikan header
#ifndef OBJEK_H
#define OBJEK_H 

#include <iostream>
using namespace std;

// Status dari lilin
typedef enum {on, off} status;

typedef struct korban {
    string nama;
    int koorxk;
    int kooryk;

    // Isi elemen yang dimiliki oleh tipe data korban
    // korban disimbolkan dengan huruf pertama nama korban pada peta
} korban;

typedef struct  lilin{
    int koorxl;
    int kooryl;
    // Isi elemen yang dimiliki oleh tipe data lilin
    // lilin disimbolkan dengan huruf L pada peta
} lilin;

/**
 * @brief Prosedur untuk menambahkan korban pada peta
 * 
 * @param peta double pointer menuju matriks peta
 * @param nama nama dari korban
 * @param koorx koordinat korban (x)
 * @param koory koordinat korban (y)
 * @param korban_baru pointer menuju data korban baru
 * @result korban baru telah ditambahkan dan simbol pada koordinat tersebut diisi dengan huruf pertama nama korban
 */
void TambahKorban(char** peta, string nama, int koorxk, int kooryk, korban* korban_baru);

/**
 * @brief Prosedur untuk menambahkan lilin pada peta
 * 
 * @param peta double pointer menuju matriks peta
 * @param koorx koordinat korban (x)
 * @param koory koordinat korban (y)
 * @param lilin_baru pointer menuju data lilin
 * @result lilin baru telah ditambahkan dan simbol pada koordinat tersebut diisi dengan L
 */
void TambahLilin(char** peta, int koorxl, int kooryl, lilin* lilin_baru);

#endif