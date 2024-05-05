#include<iostream>
using namespace std;

struct Camaba {
    int nou;         // Nomor urut
    float mtk;      // Nilai Matematika
    float bing;      // Nilai Bahasa Inggris
    float rata;     // Nilai rata-rata
    string nama;    // Nama calon mahasiswa
    string status;  // Status kelulusan
};

void inputDanEvaluasi(Camaba mhs) {

    cout << "Masukkan nomor urut: ";
    cin >> mhs.nou;
    cout << "Masukkan nama: ";
    cin >> mhs.nama;
    cout << "Masukkan nilai Matematika: ";
    cin >> mhs.mtk;
    cout << "Masukkan nilai Bahasa Inggris: ";
    cin >> mhs.bing;

    // Menghitung rata-rata
    mhs.rata = (mhs.mtk + mhs.bing) / 2;

    // Menentukan status kelulusan
    if (mhs.rata >= 70 && mhs.mtk > 80) {
        mhs.status = "Lulus";
    }
    else {
        mhs.status = "Tidak Lulus";
    }

    cout << "rata rata : " << mhs.rata << endl;
    cout << "Status Kelulusan: " << mhs.status << endl;
    cout << endl;
}

int main() {
    char ulang;


    do {
        int ngulang;
        cout << "ngulang sampai berapa kali? " << endl;
        cin >> ngulang;

        for (int i = 0; i < ngulang; i++)
        {
            Camaba mhs;
            inputDanEvaluasi(mhs);
        }

        cout << "Apakah anda ingin mengulang memasukkan data mahasiswa baru? (Y/N): ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');  // Loop terus menerus sampai pengguna memasukkan selain 'Y' atau 'y'

    return 0;
}

// 1. int = digunakan untuk angka bulat , float = digunakan untuk angka desimal , string = digunakan untuk teks

// 2. Kondisional statement terdiri dari ;
// a. if statement 
//    Mengevaluasi kondisi yang diberikan, Jika kondisi tersebut benar, maka blok kode dalam kurung kurawal akan diesksekusi.
//    Jika tidak, blok kode akan dilewati.
// b. if else statement
//    Jika kondisi if tidak terpenuhi (false). Maka blok kode dalam else akan di eksekusi.
// c. Else if ladder
//    Memungkinkan terjadi beberapa kondisi alternatif. Setiap else if dieval secara berurut. Salah satu kondisi terpenuhi.
//    Blok kode yang sesuai, akan dieksekusi.
// d. switch statement
//    Setiap case memungkinkan nilai yang mungkin dieval. Jika nilai tidak cocok dengan salah satu case blok kode yang sesuai diekseskusi.
// Default adalah opsional dan dieksekusi ketika tidak ada case yang cocok. Mengatur alur eksekusi program bedasarkan kondisi yang dipenuhi 
// atau nilai yang dievaluasi.

// 3. Struct tipe data yang digunakan untuk mengelompokann berbagai jenis data bersama-sama daalam satu unit. Yang disebut struktur 'struct'
//    mirip dengan kelas ('class'). Namun, memiliki perbedaan utama dalam standar default dan tingkatnya.
// a. deklarasi struct 
//    Mendeklarasikan menggunakan kata kunci oleh nama struktur dan kemudian di dalam tanda kurung kurawal kita mendeklarasikan anggota struktur
//    tersebut.
// b. Membuat objek  dari struct 
//    Setelah deklarasi dapat membuat objek dari struct dengan menyebutkan nama struktur diikiuti  oleh nama objek yang kita buat 
// c. Mengakses anggota struct 
//    Mengakses anggota dari sebuah struct menggunakan operator titik '.'
// d. Menggunakan struct dalam fungsi
//    Digunakan untuk mengelompokkan data. Dapat memanggil fungsi tersebut dan meneruskan objek contoh "mhs" sebagai argumen
// e. Menggunakan pointer ke struct
//    Memungkinkan manipulasi langsung terhadap data dalam struktur.

// 4. Fungsi adalah blok kode yang dapat dipanggil dari bagian lain, dari program. Memiliki tipe pengambilan yang menentukan
//    jenis data yang dikembalikan oleh fungsi tersebut. Setelah diekseskusi menerima argumen (input) yang bisa digunakan di dalamnya.
//    Prosedur adalah blok kode yang mirip dengan fungsi tetap tidak mengembalikan nilai
//    Melakukan tugas tertentu tanpa menghasilkan nilai kembali.
//    Prosedur contoh "pesan selamat" hanya menyetak pesan ke layar tanpa mengembalikan nilai apapun.

// 5. Cara melakukan looping, menggunakan loop for, while, dan do while
// a. for loop 
//    Melakukan iterasi berulang berdasarkan kode yang ditentukan. Variable awal dideklarasi dan di inisiasi dibagian inisiasi.
//    loop terus berjalan selama kondisi terpenuhi dan setiap iterasi, increament/decreament dilakukan.
// b. while loop
//    Menjalankan blok kode selama kondisi yang ditentukan benar. Loop while memeriksa kondisi sebelum setiap iterasi.
// c. do while loop
//    Do while blok kode akan dijalankan setidaknya sekalli, sebelum kondisi cek
// Menggunakan looping dapat melakukan tugas seperti mengulang iterasi melalui array, melakukan operasi berulang
// dan lainnya. Memungkinkan untuk menjalankan sebagai kode tertentu berulang kali dengan mudah dan efisien.
