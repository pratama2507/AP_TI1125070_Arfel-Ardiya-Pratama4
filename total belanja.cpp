#include<iostream>
using namespace std;

int hitungLuas(int p, int l);

int main(){
    int p = 10, l = 5;

    int hasil = hitungLuas(p, l);

    cout << "panjang: " << p << "Lebar: " << l << endl;
    cout << "Luas persegi panjang: " << hasil << endl;
    return 0;
}
