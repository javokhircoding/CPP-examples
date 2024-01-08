#include <iostream>
using namespace std;
int main(){
    // a baytga ten juda ko'p fayl, hajmi b gigabayt bo'lgan fleshkaga shulardan nechtasi sig'adi va orib qolgan bo'sh joy baytlarda
    int a, b, u, n;  // 1gigabayt = 2**30 bayt
    cout << "Necha baytga teng: "; cin >> a;
    cout << "Fleshka harmi qancha(GB): "; cin >> b;
    b = b*(2**30);
    n = b / a;
    cout << n << "ta sig'adi";
    return 0;
}