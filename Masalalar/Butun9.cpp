#include <iostream>
using namespace std;
int main(){
    // a kilobayt juda ko'p, hajmi b megabayt cd disk, cdga shulardan nechta sig'adi? 1megabayt = 1024 kilobayt
    int a, b, n, cd;
    cout<<"Necha megabaytlik cd disk: "; cin >> b;
    //ko'plab fayllar bor, nechtasi sig'adi
    cout<<"Necha kilobaytlik fayllar: "; cin >> a; //cd kilobaytlik diskka nechta(n) a kilobaytlik fayl sig'adi
    cd = b * 1024;
    n = cd/a;
    cout<<n<<"ta fayl sig'adi";
    return 0;
}