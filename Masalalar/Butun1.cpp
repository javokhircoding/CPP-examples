#include <iostream>
using namespace std;
int main(){
    int a, b, q, b;  // A>B
    cin >> a >> b;
    q = a% b;
    b = a - q;

    cout << "Butun qismi: "<<b;
    cout << "Qoldiq: "<<q;
    return 0;
}