#include <iostream>
#include <vector>
using namespace std;

class orang
{
public:
    string nama;

    orang(string pNama) : nama(pNama)
    {
        cout << "oranag dibuat\n"
             << endl;
    }
    ~orang()
    {
        cout << "orang dihapus\n"
             << endl;
    }

    int jumlah(int a, int b)
    {
        return a + b;
    }
};

class pelajar : public orang
{
public:
    string sekolah;

    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah)
    {
        cout << "pelajar dibuat\"" << endl;
    }
    ~pelajar()
    {
        cout << "pelajar dihapus\n"
             << endl;
    }
    string perkenalan(){
        return "Halo, nama saya " + nama + " dari sekolah" + sekolah + "\n\n"}
};

int main()
{
    pelajar siswa1("andi laksono", "sman 1 bantul");
    cout << siswa1.perkenalan();
    cout << "Hasil = " << siswa1.jumlah(10, 99) << endl;

    return 0;
}