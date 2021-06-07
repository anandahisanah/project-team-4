#include<iostream>
using namespace std;

int main() {
    cout<<"Masukkan jumlah angka yang ingin di input: ";
    int angka;
    cin>>angka;
    int array[angka], key, i;

    for (int j = 0; j < angka; j++) {
        cout<<"";
        cin>>array[j];
    }
    for (int a = 0; a < angka; a++) {
        cout<<"Elemen ke [ "<<a<<" ]  =  ";
        cout<<array[a]<<endl;
    }

    cout<<"Masukkan angka yang ingin dicari : ";
    cin>>key;

    for (i = 0; i < angka; i++) {
        if (key == array[i]) {
            cout<<"Angka ditemukan pada index ke :  "<<i<<endl;
            break;
        }
    }
    if (i == angka) {
        cout<<"Angka tidak ditemukan!";
    }
    return 0;
}
