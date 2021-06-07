// Deklarasi Library iostream. Library ini berisi fungsi-fungsi untuk melakukan input dan 
// output
// 🡳🡳🡳
#include<iostream>
// Library yang di input/digunakan                                        
// 🡳🡳🡳
using namespace std;

// Fungsi main() adalah fungsi utama dalam program. Fungsi ini akan dieksekusi pertama kali 
// saat program dijalankan.
// Fungsi main akan mengembalikan nilai 0 setelah selesai dieksekusi.
// 🡳🡳🡳
int main() {
    // cout berfungsi untuk menampilkan data ke alat output khususnya data berupa teks.
    // 🡳🡳🡳
    cout<<"Masukkan jumlah angka yang ingin di input: ";
    // Mendefinisikan variabel Angka sebagai Integer, berfungsi mengkonversi bilangan menjadi 
    // bilangan bulat (integer)
    // 🡳🡳🡳
    int angka;
    // cin berfungsi untuk melakukan perintah pengimputan dasar text dengan menggunakan 
    // keyboard, mouse, dll 
    // Mendeklarasikan input karakter angka
    // 🡳🡳🡳
    cin>>angka;
    // Mendefinisikan variabel array[angka], key, i sebagai Integer. Array adalah kumpulan dari 
    // nilai-nilai data bertipe sama dalam urutan tertentu yang menggunakan sebuah nama yang 
    // sama. Nilai-nilai data di suatu array disebut dengan elemen-elemen array
    // 🡳🡳🡳
    int array[angka], key, i;
    // Perulangan for, untuk mengulang berapa angka yang ingin diinput,
    // 🡳🡳🡳
    for (int j = 0; j < angka; j++) {
        cout<<"";
        cin>>array[j];
    }
    // Perulangan untuk mengulang dan menampilkan angka yang sudah tersimpan pada array
    // 🡳🡳🡳
    for (int a = 0; a < angka; a++) {
        cout<<"Elemen ke [ "<<a<<" ]  =  ";
        // endl berfungsi untuk menambahkan baris baru sesuai angka yang telah dimasukkan
        // 🡳🡳🡳
        cout<<array[a]<<endl;
    }

    cout<<"Masukkan angka yang ingin dicari : ";
    // Inputan yang sudah dimasukkan diatas akan tersimpan pada variabel key
    // 🡳🡳🡳
    cin>>key;

    for (i = 0; i < angka; i++) {
        // Mencari angka yang telah diinput
        if (key == array[i]) {
            // Jika ditemukan, maka akan tampil output seperti ini
            // 🡳🡳🡳
            cout<<"Angka ditemukan pada index ke :  "<<i<<endl;
            // break adalah perintah khusus yang dipakai untuk memaksa sebuah perulangan 
            // berhenti sebelum waktunya.
            // 🡳🡳🡳
            break;
        }
    }
    if (i == angka) {
        // Jika angka yang dicari tidak ada didalam array, maka akan tampil output dibawah ini
        // 🡳🡳🡳
        cout<<"Angka tidak ditemukan!";
    }
    // Pernyataan return ini akan mengakhiri fungsi main. return 0 berarti nilai balik 
    // dari suatu fungsi adalah sebuah bilangan 0.
    // 🡳🡳🡳
    return 0;
}
