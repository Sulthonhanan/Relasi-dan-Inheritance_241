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
