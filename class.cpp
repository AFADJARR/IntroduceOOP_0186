#include <iostream>
using namespace std;
class lingkaran{
    public:
    double jarijari;
    double luaslingkaran;

    void InputData(){
        cout << "masukan jarijari" << endl;
        cin >> jarijari;
    }
    double HitungLuas(){
        return 3.14*jarijari*jarijari;             
    }
};
int main(){
    lingkaran bulet;
    bulet.InputData();
    bulet.jarijari;
    cout << endl;
    cout << "luasnya adalah " << bulet.HitungLuas() << endl;
}