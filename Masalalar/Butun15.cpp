#include <iostream>
using namespace std;
int main(){
    int son, y, k, b, o;
    cout << "Sonni kiriting: "; cin>>son;
    b = son%10;
    o = son/10;
    k = b * o;
    y = b + o;
    cout << b << o;
    return 0;
}