#include <iostream>
using namespace std;

int main(){
    int son, yson, bi, ik ,uch;
    cout << "Son kiriting: "; cin >> son;
    uch = son -  [son/10] * 10;
    ik = son - uch;
    ik = ik % 100;
    ik = ik/10;
    bi = son/100;
    yson = uch * 100 + ik * 10 + bi;
    cout << "Masala yechimi: "<<son*yson;
    return 0;
}