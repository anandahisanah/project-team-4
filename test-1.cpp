#include<iostream>
 
using namespace std;
 
int main() {
    int a[20], n, x, i, flag=0;
    cout<<"Masukkan jumlah angka yang ingin diinput : ";
    cin>>n;
    cout<<"\nMasukkan angka\n";
    for(i=0; i<n; ++i)
        cin>>a[i];
        cout<<"\nMasukkan angka yang dicari : ";
        cin>>x;
    for(i=0;i<n;++i) {
        if(a[i]==x) {
            flag=1;
            break;
        }
    }
    if (flag) 
        cout<<"\nAngka ditemukan pada posisi ke "<<i+1;
    else 
        cout<<"\nAngka tidak ditemukan";
    return 0;
}