#include <stdio.h>
#include <string.h>

// deklarasi global variabel yang dapat dipakai disemua function
int pilihan;
int counter = 0;
char findNIM[50];
float nilaiAkhir;
char* grade;
char* status;

// membuat struct nilai untuk menyimpan setiap nilai mahasiswa
struct dataNilai{
  int nilai_hadir;
  int nilai_tugas;
  int nilai_quiz;
  int nilai_forum;
  int nilai_uas;
};

// membuat struct mahasiswa untuk menyimpan data mahasiswa
struct dataMahasiswa{
  char nim[12];
  char nama[50];
  char mata_kuliah[15];
  struct dataNilai nilai;
};

// deklarasi variabel struct yang telah dibuat
struct dataMahasiswa arrayMhs[50];
struct dataMahasiswa mhs;
struct dataMahasiswa nilaiMhs;

// function menu utama
// terdapat 4 pilihan menu yang user dapat pilih
void showMenu(){
  printf("---=== PROGRAM DATA MAHASISWA ===---\n");
  printf("1. Input data mahasiswa \n");
  printf("2. Input nilai mahasiswa \n");
  printf("3. Lihat data mahasiswa \n");
  printf("4. Exit \n");
  printf("Massukan pilihan anda : ");
  scanf("%d", &pilihan);
  printf("----------==============-------------\n");
  printf("\n");
}

// function untuk menginput data mahasiswa
void inputDataMahasiswa(){
  int find = 0;
  printf("Masukkan nama mahasiswa : ");
  scanf(" %[^\n]s", mhs.nama);
  printf("Masukkan NIM mahasiswa : ");
  scanf("%s", mhs.nim);
  printf("Masukkan mata kuliah : ");
  scanf(" %[^\n]s", mhs.mata_kuliah);
  printf("\n");

  // jika sudah input data pertama kemudian melakukan pengecekan dengan nim
  if (counter > 0){
    for (int i = 0; i < counter; i++){
      if (strcmp(mhs.nim, arrayMhs[i].nim) == 0){
          find = 1;
      } 
    }
  }

  // validasi jika sudah pernah input data nim sebelumnya
  if (find > 0){ // jika data sebelum sudah pernah di inputkan 
      printf("==============================================================\n");
      printf("\t\t\t WARNING ! \t\n");
      printf("Mahasiswa dengan nim %s sudah pernah di daftarkan sebelumnya !\n", mhs.nim);
      printf("==============================================================\n");
      printf("\n");
  } else{ // jika belum pernah di inputkan maka akan disimpan dalam array of struct
      arrayMhs[counter] = mhs;
      counter++;
  }
}

// function untuk menginput data nilai mahasiswa
void inputDataNilaiMahasiswa(){
  int indexInput = -1;
  if(counter == 0){ // validasi jika belum pernah input data
    printf("==============================================================\n");
    printf("\t\t\t WARNING ! \t\n");
    printf("Data mahasiswa masih kosong, harap input data terlebih dahulu !\n");
    printf("==============================================================\n");
    printf("\n");
  } else{ // jika sudah pernah input data, maka user diminta masukkan nim untuk input nilai
    printf("Masukkan NIM mahasiswa : ");
    scanf("%s", findNIM);
    // pengecekan apakah nim ditemukan dalam struct
    for (int i = 0; i < counter; i++){
      if (strcmp(findNIM, arrayMhs[i].nim) == 0){
        indexInput = i;
      }
    }

    if (indexInput == -1){ // validasi jika nim tidak ditemukan
      printf("\n");
      printf("===========================================\n");
      printf("\t\t WARNING ! \t\n");
      printf("Data tidak ditemukan, NIM kurang sesuai ! \n");
      printf("===========================================\n");
      printf("\n");
    } else{ // jika ditemukan maka akan input data nilai mahasiswa
      nilaiMhs = arrayMhs[indexInput];
      printf("Masukkan nilai hadir : ");
      scanf("%d", &nilaiMhs.nilai.nilai_hadir);
      printf("Masukkan nilai tugas : ");
      scanf("%d", &nilaiMhs.nilai.nilai_tugas);
      printf("Masukkan nilai quiz : ");
      scanf("%d", &nilaiMhs.nilai.nilai_quiz);
      printf("Masukkan keaktifan forum : ");
      scanf("%d", &nilaiMhs.nilai.nilai_forum);
      printf("Masukkan nilai UAS : ");
      scanf("%d", &nilaiMhs.nilai.nilai_uas);
      printf("\n");
      arrayMhs[indexInput] = nilaiMhs; // simpan data nilai mahasiswa kedalam struct
    }
  }  
}

// function untuk menghitung grade dan status mahasiswa
void hitungNilai(int i){
  // rumus menghitung nilai akhir
  nilaiAkhir = (arrayMhs[i].nilai.nilai_hadir * 0.1) + (arrayMhs[i].nilai.nilai_tugas * 0.2) +
  (arrayMhs[i].nilai.nilai_quiz * 0.1) + (arrayMhs[i].nilai.nilai_forum * 0.1) + (arrayMhs[i].nilai.nilai_uas * 0.5);

  // pengecekan nested-if nilai akhir
  if (0 <= nilaiAkhir && nilaiAkhir <= 49){
      grade = "E";
      status = "Tidak Lulus";
  } else if (50 <= nilaiAkhir && nilaiAkhir <= 64 ){
      grade = "D";
      status = "Lulus";
  } else if (65 <= nilaiAkhir && nilaiAkhir <= 69){
      grade = "C";
      status = "Lulus";
  } else if (70 <= nilaiAkhir && nilaiAkhir <= 74){
      grade = "B-";
      status = "Lulus";
  } else if (75 <= nilaiAkhir && nilaiAkhir <= 79){
      grade = "B";
      status = "Lulus";
  } else if (80 <= nilaiAkhir && nilaiAkhir <= 84){
      grade = "B+";
      status = "Lulus";
  } else if (85 <= nilaiAkhir && nilaiAkhir <= 89){
      grade = "A-";
      status = "Lulus";
  } else if (90 <= nilaiAkhir && nilaiAkhir <= 100){
      grade = "A";
      status = "Lulus";
  }
}

// function untuk menampilkan data mahasiswa
void showDataMahasiswa(){
  int indexMahasiswa = -1;
  if(counter == 0){ // validasi jika belum pernah input data
  printf("==============================================================\n");
  printf("\t\t\t WARNING ! \t\n");
  printf("Data mahasiswa masih kosong, harap input data terlebih dahulu !\n");
  printf("==============================================================\n");
  printf("\n");
  } else{ // jika sudah pernah input data, maka user diminta masukkan nim untuk lihat data mahasiswa
    printf("Masukkan NIM mahasiswa : ");
    scanf("%s", findNIM);
    // pengecekan apakah nim ditemukan dalam struct
    for (int i = 0; i < counter; i++){
      if (strcmp(findNIM, arrayMhs[i].nim) == 0){
        indexMahasiswa = i;
      }
    }

    if (indexMahasiswa == -1){ // validasi jika nim tidak ditemukan
      printf("\n");
      printf("===========================================\n");
      printf("\t\t WARNING ! \t\n");
      printf("Data tidak ditemukan, NIM kurang sesuai ! \n");
      printf("===========================================\n");
      printf("\n");
    } else{ // jika ditemukan akan menampilkan data mahasiswa
      printf("\n");
      printf("===== DATA MAHASISWA =====\n");
      printf("Nama : %s \n", arrayMhs[indexMahasiswa].nama);
      printf("NIM : %s \n", arrayMhs[indexMahasiswa].nim);
      printf("Mata Kuliah : %s \n", arrayMhs[indexMahasiswa].mata_kuliah);

      printf("======= DATA NILAI =======\n");
      if (arrayMhs[indexMahasiswa].nilai.nilai_forum == 0){ // validasi jika data mahasiswa belum di input nilainya
        printf("Data nilai mahasiswa belum di input ! \n");
      } else{ // jika sudah diinput nilainya maka akan memunculkan data nilai dari struct
        printf("Nilai Hadir : %d \n", arrayMhs[indexMahasiswa].nilai.nilai_hadir);
        printf("Nilai Tugas : %d \n", arrayMhs[indexMahasiswa].nilai.nilai_tugas);
        printf("Nilai Quiz : %d \n", arrayMhs[indexMahasiswa].nilai.nilai_quiz);
        printf("Nilai Forum : %d \n", arrayMhs[indexMahasiswa].nilai.nilai_forum);
        printf("Nilai UAS : %d \n", arrayMhs[indexMahasiswa].nilai.nilai_uas);
        printf("===== Data Kelulusan ====\n");
        hitungNilai(indexMahasiswa);
        printf("Nilai rata-rata : %0.2f \n", nilaiAkhir);
        printf("Grade mahasiswa : %s \n", grade);
        printf("Status : %s \n", status);
      }
      printf("=========================");
      printf("\n");
      printf("\n");
    }
  } 
}

// fucntion untuk keluar dari aplikasi
void exitProgram(){
  printf("Terima kasih \n");
  printf("Aplikasi berhenti.... \n");
}

// main function
int main() {
  // terdapat do while agar selalu dapat memilih menu utama
  do {
    // memanggil function showMenu() untuk menampilkan menu utama
    showMenu();  

    // switch case untuk memmilih menu 
    switch(pilihan){
      case 1: // jika memilih 1 maka akan memanggil function input data mahasiswa
        inputDataMahasiswa();
      break;

      case 2: // jika memilih 2 maka akan memanggil function input nilai mahasiswa
        inputDataNilaiMahasiswa();
      break;

      case 3: // jika memilih 3 maka akan memanggil function tampil data mahasiswa dan status
        showDataMahasiswa();
      break;

      case 4: // jika memilih 4 akan keluar dari aplikasi
        exitProgram();
      break;

      default: // validasi secara default jika user tidak input angka 1 - 4 sesuai pilihan menu
        printf("Mohon maaf pilihan harus 1 - 4 \n");
      break;
    }
  } while(pilihan != 4);
}