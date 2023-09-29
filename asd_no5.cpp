#include <iostream>
#include <string>
using namespace std;
typedef struct{
    string nama,alamat,jurusan;
    float IPK;
}data;

int main() {
    string input;
    int i;
    string nmkelas [] = {"Dasar Pemrograman","Kalkulus","Fisika Dasar","Basis Data","Bahasa Inggris", "Sistem Operasi"};
    string hari [] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Senin"};
    string tanggal [] = {"10-10-2024","11-10-2024","12-10-2024","13-10-2024","14-10-2024","15-10-2024","16-10-2024"};
    string waktu[] = {"10:00-12:00","10:00-12:00","10:00-12:00","10:00-12:00","10:00-12:00","10:00-12:00"};
    data mahasiswa [3];
    cout<<"isi data mahasiswa"<<endl;
    for(i=0; i<3; i++){
    cout << "Nama : ";
    getline(cin, mahasiswa[i].nama);
    cout<<"Jurusan : ";
    getline (cin, mahasiswa[i].jurusan);
    cout << "IPK : ";
    cin >> mahasiswa[i].IPK;
    cin.ignore();
    cout << "Alamat : ";
    getline(cin, mahasiswa[i].alamat);
    cout<<endl;
    }
    cout<<"masukkan pencarian jadwal kelas menggunakan hari (sesuai dengan penulisan)"<<endl;
    cout<<"Hari : ";
    cin>>input;
    cout<<endl;
    for (i=0; i<6; i++){
        if (hari[i]== input){
            cout<<"nama kelas : "<<nmkelas[i]<<endl;
            cout<<"hari : "<<hari[i]<<endl;
            cout<<"tanggal : "<<tanggal[i]<<endl;
            cout<<"waktu : "<<waktu[i]<<endl;
            cout<<endl;
        }
    }
    return 0;
}
