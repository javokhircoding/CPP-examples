#include <iostream>
using namespace std;
int main(){
    // a bayt, n ta fayl ,barcha fayllar to'liq necha kilobayt? 1kilobayt = 1024 bayt
    int a, n, j, u;
    cout <<"nechta fayl: "; cin >> n;
    cout << "hajmi qanday?: "; cin >> a;
    u = a * n;
    j = u / 1024;
    cout << "Javob: "<<j<<"kilobayt";
    return 0;
}