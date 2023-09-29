#include <iostream>
using namespace std;
typedef struct {
string nama;
string day,month,year;
float jamker;
}lembur;
int main(){
    int i;
    lembur pegawai [5];
    cout<<"masukkan data-data dan jam kerja";
    cout<<endl;
    for (i=0; i<5; i++){
        cout<<"nama : ";
        cin>>pegawai[i].nama;
        cout<<"tanggal mulai : ";
        cin>>pegawai[i].day>>pegawai[i].month>>pegawai[i].year;
        cout<<"total jam kerja : ";
        cin>>pegawai[i].jamker;
    }
    cout<<endl;
    cout<<"tampilkan pekerja yang bekerja lebih dari 40 jam seminggu"<<endl;
for (i=0; i<5; i++){
    if(pegawai[i].jamker>40){
        cout<<"daftar nama : "<<pegawai[i].nama<<", jam kerja "<<pegawai[i].jamker<<" jam\n";
    }
}
return 0;
}
