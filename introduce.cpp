#include <iostream>
using namespace std;

class hewan{
    private:
    string jeniskelamin;
    public:
    string tipe;
    string umur;
    
    void InputData(){
        cout << "masukan jeniskelamim" << endl;
        cin >> jeniskelamin;
        cout << "masukan tipe" << endl;
        cin >> tipe;
        cout << "masukan umur" << endl;
        cin >> umur;
    }

    void TampilHewan(){
        cout << "jeniskelaminya adalah " << jeniskelamin << endl;

    }
};

int main(){
    hewan ambon;
    ambon.InputData();
    cout << "umurnya adalah " << ambon.umur << endl;
    cout << "tipenya adalah " << ambon.tipe << endl;
    ambon.TampilHewan();
}