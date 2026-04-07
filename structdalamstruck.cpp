#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota:

};

struct orang 
{
    string nama;
    detailAlamat;
    int umur;
};

int main ()
{
    //Deklarasi variable struct
    Orang mhs;
    //mengisi data 
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data desa : ";
    cin >> mhs.desa;
    cout << "isikan data kota : ";
    cin >> mhs.kota;
    cout << "isikan data umur : ";
    cin >> mhs.umur
    cout << endl;

    cout << "Data Tampil" << endl;
    cout << "nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "kota : " << mhs.alamat.kota << endl;
    cout << "umur : " << mhs.umur << endl;
}