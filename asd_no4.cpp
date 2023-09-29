#include <iostream>
using namespace std;
typedef struct {
string NIM,nama;
float IPK, IPKfinal;
}data;
int main (){
int i;
string input;
data mahasiswa[3];
mahasiswa[0].NIM = "12345";
mahasiswa[0].nama = "John Doe";
mahasiswa[0].IPK = 3.85;
mahasiswa[1].NIM = "12346";
mahasiswa[1].nama = "Jane";
mahasiswa[1].IPK = 2.4;
mahasiswa[2].NIM = "12347";
mahasiswa[2].nama = "Martin";
mahasiswa[2].IPK = 3.0;
cout<<"tampilkan mahasiswa dengan IPK dibawah 3.0"<<endl;
for (i=0; i<3; i++){
    mahasiswa[i].IPKfinal=mahasiswa[i].IPK + 0.2;
    if(mahasiswa[i].IPKfinal>4.0){
        mahasiswa[i].IPKfinal = 4.0;
    }else if(mahasiswa[i].IPKfinal<3.0){
    cout<<"daftar nama : "<<mahasiswa[i].nama<<", IPK : "<<mahasiswa[i].IPKfinal<<"\n";
    }
}
cout<<endl;
cout<<"cari daftar mahasiswa dan IPK"<<endl;
cout<<"masukkan nama (sesuai dengan penulisan) : ";
getline (cin, input);
for (i=0; i<3; i++){
    if (mahasiswa[i].nama == input){
        cout<<"nama : "<<mahasiswa[i].nama<<", IPK : "<<mahasiswa[i].IPKfinal<<"\n";
    }
}
return 0;
}
