#include <iostream>
using namespace std;
int main(){
    int a, t, kg;
    cout << "Necha kilogramm?: "; cin >> a;
    t = a/1000;
    kg = a - t*1000;
    cout << a << "kg shokalad "<<t<<" tonna va "<<kg<<"kg"<<endl;
    return 0;
}