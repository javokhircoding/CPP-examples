#include <iostream>
using namespace std;
int main(){
    int a, b, r, p; // asm, bdm, rm, pdm
    cout << "a tomon(cm): "; cin >> a;
    cout << "b tomon(dm): "; cin >> b;
    cout << "r tomon(m): "; cin >> r;
    a = (a/10) + ((a%10)*0.1); //dm ga o'tkazdim
    r *= 10; //dm ga o'tkazdim
    p = a + r + b;
    cout << "Uchburchak perimetri "<<p<<"dm";
    return 0;
}