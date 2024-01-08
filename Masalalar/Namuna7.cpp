#include <iostream>
using namespace std;
int main(){
    int a, son2; char k0, k1, k2, k3;
    cout <<"A sonni kiritng: "; cin >> a;
    k0 = a%2; a = a/2;
    k1 = a%2; a = a/2;
    k2 = a%2; a = a/2;
    k3 = a%2;
    son2 = k3 * 100+k2*10+k0;
    cout<<"Javob: "<<son2;
    return 0;
}