#include <iostream>
using namespace std;
int main(){
    // 1 sentner = 100 kg, 1 tonna = 10 sentner, a sentner necha to'liq tonna va ortgani necha kg
    int a, t, kg;
    cout<<"Necha sentner: "; cin >> a;
    t = a / 10;
    kg = (a % 10) * 100;
    cout << a<<"sentner = "<<t<<" tonna va "<<kg<<"kg ga teng"<<endl;
    return 0; 
}