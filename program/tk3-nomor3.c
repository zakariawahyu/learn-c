#include <stdio.h>

/// struct untuk menampung data alamat
struct alamatRumah{
    char namaJalan[50];
    char nomorRumah[50];
    char kota[50];
    char provinsi[50];
};

// struct untuk menampung data tanggal lahir
struct tanggalLahir{
    int tanggal;
    int bulan;
    int tahun;
};

// struct untuk menampung data dosen dll
struct dosen{
    char nidn[20];
    char nama[20];
    struct alamatRumah alamat;
    struct tanggalLahir ttl;
};

int main(){
    // deklarasi variabel array of struct
    struct dosen dsn[5]; 
    // deklarasi variabel struct
    struct dosen dosen; 

    // for loop untuk menginputkan 5 data
    printf("--- INPUT DATA DOSEN ---\n");
    for (int i = 0; i < 5; i++){
        printf("=====--- INPUT DATA DOSEN KE %d ---=====\n", i+1);
        printf("Masukkan nama dosen : ");
        scanf(" %[^\n]s", dosen.nama);
        printf("Masukkan NIDN dosen : ");
        scanf("%s", dosen.nidn);
        printf("-----===== TANGGAL LAHIR =====-----\n");
        printf("Masukkan tanggal lahir (DD) : ");
        scanf("%d", &dosen.ttl.tanggal);
        printf("Masukkan bulan lahir (MM) : ");
        scanf("%d", &dosen.ttl.bulan);
        printf("Masukkan tahun lahir (YYYY) : ");
        scanf("%d", &dosen.ttl.tahun);
        printf("-----===== ALAMAT RUMAH =====-----\n");
        printf("Masukkan nama jalan : ");
        scanf(" %[^\n]s", dosen.alamat.namaJalan);
        printf("Masukkan nomor rumah : ");
        scanf("%s", dosen.alamat.nomorRumah);
        printf("Masukkan kota : ");
        scanf(" %[^\n]s", dosen.alamat.kota);
        printf("Masukkan provinsi : ");
        scanf(" %[^\n]s", dosen.alamat.provinsi);
        printf("=========-------- ---------==============\n");
        printf("\n");
        dsn[i] = dosen; // setiap perulangan data dosen akan disimpan
    }
    printf("\n");

    // menampilkan data
    for (int j = 0; j < 5; j++){ // for loop sebanyak 5 data
      printf("======----- DATA DOSEN KE %d ------====\n", j+1);
       // memanggil nama di setiap indexnya 
      printf("Nama : %s \n", dsn[j].nama);
       // memanggil nidn di setiap indexnya 
      printf("NIDN : %s \n", dsn[j].nidn);
       // memanggil data tanggal lahir di setiap indexnya 
      printf("Tanggal lahir : %d-%d-%d \n", dsn[j].ttl.tanggal, dsn[j].ttl.bulan, dsn[j].ttl.tahun);
       // memanggil nama di setiap indexnya 
      printf("Alamat : %s, No %s, %s, %s \n", dsn[j].alamat.namaJalan, dsn[j].alamat.nomorRumah, dsn[j].alamat.kota, dsn[j].alamat.provinsi);
      printf("\n");
    }
}