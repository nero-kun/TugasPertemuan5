#include<iostream>
using namespace std;

int pokok(int jamKerja);
int lembur(int jamKerja);
int makan(int jamKerja);
int transport(int jamKerja);

int main()
{
    string nip; //saya pakai string karena NIP memiliki banyak digit, sehingga tidak pakai int
    string nama;
    int jumlahJamKerja;

    cout<<"Masukkan NIP Anda: ";
    cin>>nip;

    cout<<"Masukkan Nama Anda (Panggilan Saja): ";
    cin>>nama;

    cout<<"Masukkan jumlah jam Anda bekerja: ";
    cin>>jumlahJamKerja;

    int gajiPokok=pokok(jumlahJamKerja);
    int gajiLembur=lembur(jumlahJamKerja);
    int uangMakan=makan(jumlahJamKerja);
    int uangTransport=transport(jumlahJamKerja);
    int totalGaji= gajiPokok+gajiLembur+uangMakan+uangTransport;

    cout << "NIP: "<< nip <<endl;
    cout << "Nama: "<< nama <<endl;
    cout << "Gaji Pokok: Rp. "<< gajiPokok <<endl;
    cout << "Lembur: Rp. "<< gajiLembur <<endl;
    cout << "Uang Makan: Rp. "<< uangMakan <<endl;
    cout << "Transport: Rp. "<< uangTransport <<endl;
    cout<<endl;
    cout<<"Total Gaji(pokok+lembur+makan+transport): "<<totalGaji<<endl;

    return 0;
}

int pokok(int jamKerja) {
    if (jamKerja<=8)
        return 7500*jamKerja;
    else
        return 7500*8;
}

int lembur(int jamKerja) {
    if(jamKerja>8)
        return (jamKerja-8)*1.5*7500;
    else
        return 0;
}

int makan(int jamKerja) {
    if(jamKerja>=9)
        return 10000;
    else
        return 0;
}

int transport(int jamKerja){
    if (jamKerja>=10)
        return 13000;
    else
        return 0;
}
