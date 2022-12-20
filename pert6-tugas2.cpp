#include <iostream>
using namespace std;
int penjumlahan(int);
float penjumlahan(float);
double penjumlahan(double);

int main(){
    int a;
    float b;
    double c;
    cout << "Program untuk menghitung konversi dari drajat Fahrenheit ke celcius\n";
    cout << "Masukkan angka\n";
    cin >> a;
    b = a;
    c = a;
    cout << "Hasil konversi dari drajat Fahrenheit ke celcius: " << penjumlahan(c) << endl;
    cout << "Hasil konversi dari drajat Fahrenheit ke celcius: " << penjumlahan(b) << endl;
    cout << "Hasil konversi dari drajat Fahrenheit ke celcius: " << penjumlahan(a) << endl;
    return 0;
}

int penjumlahan(int bil1){
 return ((bil1-32)*5/9);
}
float penjumlahan(float bil1){
 return ((bil1-32)*5/9);
}
double penjumlahan(double bil1){
 return ((bil1-32)*5/9);
}