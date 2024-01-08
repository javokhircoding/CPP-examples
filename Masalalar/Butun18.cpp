#include <iostream>
using namespace std;
int main(){
    int n, s, m;
    cout << "Necha sekund o'tdi: "; cin >> n;
    m = n % 3600;
    s = 3600 - m;
    cout <<s<<" to'liq sekund qoldi";
    return 0;
}