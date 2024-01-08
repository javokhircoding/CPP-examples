#include <iostream>
using namespace std;
int main(){
    // A != 0 , y = Ax**2 + Bx + C D>0
    int a, b, c, d; bool natija;
    cin >> a >> b >> c;
    d = b*b-4*a*c;
    natija = d > 0;
    cout <<boolalpha<< "Mulohaza natijasi: "<<natija;
    return 0;
}